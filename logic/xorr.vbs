' Matthew Page CSCS1240 Spring 2014 xorr() logic library function

set fso = CreateObject("Scripting.FilesystemObject")
set anddfile = fso.opentextfile("andd.vbs", 1, false )
anddscript = anddfile.readall()
executeGlobal anddscript

set fso = CreateObject("Scripting.FilesystemObject")
set orrfile = fso.opentextfile("orr.vbs", 1, false )
orrscript = orrfile.readall()
executeGlobal orrscript

set fso = CreateObject("Scripting.FilesystemObject")
set nottfile = fso.opentextfile("nott.vbs", 1, false )
nottscript = nottfile.readall()
executeGlobal nottscript

const preferred_xorr = "true"
const notpreferred_xorr = "false"

Function xorr( input1, input2 )
	xorr = notpreferred_xorr
	if orr( input1, input2 ) = preferred_xorr then
		if nott(andd( input1, input2 )) = preferred_xorr then
			xorr = preferred_xorr
		end if
	end if
End Function
