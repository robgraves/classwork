'in class example from 04/07/2014...and 04/09/2014
set whatever = CreateObject( "Scripting.FileSystemObject" )
set aFile = whatever.OpenTextFile( "color.bmp", 1, False, 0)
'set aFile = whatever.OpenTextFile( "trial.bmp", 2, True, 0)
'aFile.write( 123 )

do 
	var = aFile.read( 1 )
	btn = msgbox( asc(var) )
loop until aFile.atEndOfStream
	
'aFile.write(RGB(155, 0, 0 ))
