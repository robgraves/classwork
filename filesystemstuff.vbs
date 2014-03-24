set myfs = createObject("Scripting.FilesystemObject")
set myfile = myfs.openTextFile("logic_library.vbs", 1, false )
myscript = myfile.readall()
executeGlobal myscript