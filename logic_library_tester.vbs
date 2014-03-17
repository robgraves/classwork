' Matthew Page CSCS1240 Spring 2014 logic library tester, 
' its sole purpose is to call and test the logic library functions
' and send any necessary info to the library or receive any info back.

set fso = CreateObject("Scripting.FilesystemObject")
set library = fso.opentextfile("nott.vbs", 1, false )
libraryscript = library.readall()
executeGlobal libraryscript

test = "t"
test_returned = nott( test )
btn = msgbox( test_returned )

