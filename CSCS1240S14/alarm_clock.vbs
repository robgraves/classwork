
hours = 0

minutes = 0

seconds = 0

Do

	Do 
		sleep( 1000 )
		seconds = seconds + 1
		if seconds = 60 then
			minutes = minutes + 1
			seconds = 0
	While seconds < 61	
	if minutes = 60 then
		hours = hours + 1
		minutes = 0
		
While minutes < 61	
if hours = 24 then
	hours = 0
	minutes = 0
	seconds = 0