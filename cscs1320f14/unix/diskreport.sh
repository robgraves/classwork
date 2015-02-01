#!/bin/bash
##
## diskreport.sh - a script to display the disk utilization on a
## 				   bunch of machines (for daily output perusal)
##
## 20140324 - enhancements to improve reliability (mth)
##
obo_machines="wedge@caprisun:/data sokraits:/export halfadder:/export wedge@lab46 www:/var/repos,/var/www auth1 auth2 mail irc log"
lair_machines="wedge@juicebox ahhcobras mthsvn auth3 nfs1:/export nfs2:/export"
projects_machines="router vmserver00 vmserver01 vmserver02 vmserver03 backup00 backup01 backup02 backup03"
dslab_machines="data:/export node00 node01 node02 node03 node04 node05 node06 node07"

for subnet in lair offbyone dslab; do
	title="${subnet} subnet"
	len=`echo " ${title} " | wc -c`
	linelen=$(((50-${len})/2))

	for((i=0; i<${linelen}; i++)); do
		echo -n "-"
	done

	echo -n " ${title} "

	for((i=0; i<${linelen}; i++)); do
		echo -n "-"
	done

	total=$((${len}+${linelen}+${linelen}))
	if [ "${total}" -lt 50 ]; then
		echo -n "-"
	fi
	echo

	echo "                    Total   Used    Free   % Used"
	echo "-------------------------------------------------"

	if [ "${subnet}" = "lair" ]; then
		machines="${lair_machines}"
	elif [ "${subnet}" = "offbyone" ]; then
		machines="${obo_machines}"
	elif [ "${subnet}" = "projects" ]; then
		machines="${projects_machines}"
	elif [ "${subnet}" = "dslab" ]; then
		machines="${projects_machines}"
		ssh root@data.dslab.lan "/export/data/global/bin/status nfs; /export/data/global/bin/status disk; /export/data/global/bin/status uptime"
		continue
	else
		echo "unconfigured subnet"
		continue
	fi
	
	for box in $machines; do
		user="`echo ${box}     | cut -d'@' -f1`"
		cpu="`echo ${box}      | cut -d'@' -f2 | cut -d':' -f1`"
		disklist="`echo ${box} | cut -d'@' -f2 | cut -d':' -f2`"
		if [ "${user}" = "${box}" ]; then
			user="root"
			cpu="`echo ${box}  | cut -d'@' -f2 | cut -d':' -f1`"
		else
			cpu="`echo ${box}  | cut -d'@' -f2 | cut -d':' -f1`"
		fi

		if [ "${cpu}" = "${disklist}" ]; then
			disklist="/"
		else
			disklist="/,${disklist}"
		fi

		for mount in `echo "${disklist}" | tr ',' ' '`; do
			cmd="df -h | grep "${mount}\$" | sed 's/ [ ]*/:/g' | cut -d':' -f2,3,4,5"
			output="`ssh ${user}@${cpu}.${subnet}.lan \"$cmd\" 2>/dev/null`"
			if [ ! -z "${output}" ]; then
				if [ "${mount}" = "/" ]; then
					printf "%-20s" "${cpu}:"
				else
					printf "  %-18s" "${mount}"
				fi
				printf "%-5s" "`echo $output | cut -d':' -f1`"
				echo -n " "
				printf "%6s" "`echo $output | cut -d':' -f2`"
				echo -n "   "
				printf "%5s" "`echo $output | cut -d':' -f3`"
				echo -n "    "
				printf "%5s" "`echo $output | cut -d':' -f4`"
				echo
			fi
		done
	done
	echo "-------------------------------------------------"
	echo
done

exit

echo "------------ OffByOne subnet ------------"
echo "           Total   Used    Free    % Used"
echo "-----------------------------------------"
for box in $obo_machines; do
	user="`echo ${box} | cut -d'@' -f1`"
	if [ "${user}" = "${box}" ]; then
		user="root"
	else
		box="`echo ${box} | cut -d'@' -f2`"
	fi

	printf "%-11s" "$box: "
	output="`ssh ${user}@${box}.offbyone.lan \"$cmd\" 2>/dev/null`"
	printf "%-5s" "`echo $output | cut -d':' -f1`"
	echo -n " "
	printf "%6s" "`echo $output | cut -d':' -f2`"
	echo -n "   "
	printf "%5s" "`echo $output | cut -d':' -f3`"
	echo -n "    "
	printf "%5s" "`echo $output | cut -d':' -f4`"
	echo
done
echo "-----------------------------------------"
echo

#echo "----------- StudentLab subnet -----------"
#echo "           Total   Used    Free    % Used"
#echo "-----------------------------------------"
#for box in $student_machines; do
	#printf "%-11s" "$box: "
	#output="`ssh ${box}.student.lab \"$cmd\" 2>/dev/null`"
	#printf "%-5s" "`echo $output | cut -d':' -f1`"
	#echo -n " "
	#printf "%6s" "`echo $output | cut -d':' -f2`"
	#echo -n "   "
	#printf "%5s" "`echo $output | cut -d':' -f3`"
	#echo -n "    "
	#printf "%5s" "`echo $output | cut -d':' -f4`"
	#echo
#done
#echo "-----------------------------------------"
#echo

echo "------------------ DSLAB subnet -------------------"
echo "           Total   Used    Free    % Used    Global"
echo "---------------------------------------------------"
for box in $dslab_machines; do
	user="`echo ${box} | cut -d'@' -f1`"
	if [ "${user}" = "${box}" ]; then
		user="root"
	else
		box="`echo ${box} | cut -d'@' -f2`"
	fi

	printf "%-11s" "$box: "
	output="`ssh ${user}@${box}.dslab.lan \"$cmd; df | grep global >/dev/null && echo -n :Y\" 2>/dev/null`"
	printf "%-5s" "`echo $output | cut -d':' -f1`"
	echo -n " "
	printf "%6s" "`echo $output | cut -d':' -f2`"
	echo -n "   "
	printf "%5s" "`echo $output | cut -d':' -f3`"
	echo -n "    "
	printf "%5s" "`echo $output | cut -d':' -f4`"
	echo -n "    "
	printf "%5s" "`echo $output | cut -d':' -f5`"
	echo
done
echo "---------------------------------------------------"
echo
