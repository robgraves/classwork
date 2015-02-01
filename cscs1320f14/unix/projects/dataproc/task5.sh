./dp37 1024 | cut -f2 | sed  '/blank/d' | sed '/error/d' | sort | uniq -dc
