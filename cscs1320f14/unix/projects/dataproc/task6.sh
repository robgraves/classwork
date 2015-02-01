./dp37 1024 | cut -f2 | sed  '/blank/d' | sed '/error/d' | sort | uniq -d | sort -t '-' | nl | awk {'printf("%s\t%s\n", $1, $2)'}

