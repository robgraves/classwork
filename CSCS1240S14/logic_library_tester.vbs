' Matthew Page CSCS1240 Spring 2014 logic library tester, 
' its sole purpose is to call and test the logic library functions
' and send any necessary info to the library or receive any info back.

set fso = CreateObject("Scripting.FilesystemObject")
set library = fso.opentextfile("logic_library.vbs", 1, false )
libraryscript = library.readall()
executeGlobal libraryscript

''one argument section
'oneArg = "false"					'change as necessary to test the logic gate
'oneArg_returned = nott( oneArg )
'btn = msgbox( oneArg_returned )

''two argument section
'twoArgs1 = 1					'change as necessary for testing the logic gates
'twoArgs2 = 1					'change as necessary for testing the logic gates					
'twoArgs_returned = halfcarry( twoArgs1, twoArgs2 )
'btn = msgbox( twoArgs_returned )

''three arguments section
'carryIn = 1
'threeArgs1 = 1
'threeArgs2 = 1
'threeArgs_returned = fullCarry(threeArgs1, threeArgs2, carryIn)
'btn = msgbox( threeArgs_returned )

''math operations section
twoMathArgs1 = "00000100"
twoMathArgs2 = "00000011"
twoMathArgs_returned = powerr( twoMathArgs1, twoMathArgs2 )
btn = msgbox( twoMathArgs_returned )

