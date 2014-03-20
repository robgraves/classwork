MsgBox("started" )

cnt = 10
times = 0
do
	times = times + 1
	cnt = cnt + 3

loop while cnt < 20

btn = msgbox(cnt & ", " & times)