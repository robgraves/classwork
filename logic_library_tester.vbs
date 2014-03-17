' Matthew Page CSCS1240 Spring 2014 logic library tester, 
' its sole purpose is to call and test the logic library functions
' and send any necessary info to the library or receive any info back.

set fso = CreateObject("Scripting.FilesystemObject")
set library = fso.opentextfile("andd.vbs", 1, false )
libraryscript = library.readall()
executeGlobal libraryscript

test1 = "t"
test2 = "t"
test_returned = andd( test1, test2 )
btn = msgbox( test_returned )

