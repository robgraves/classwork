set obj = CreateObject("Scripting.FilesystemObject")
set aFile = obj.opentextfile("March3library.vbs", 1, false )
script = aFile.readAll()
executeGlobal script

a = getInput( "Enter a number" )
btn = MsgBox( a )
