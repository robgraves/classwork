set myfs = createObject( "Scripting.FilesystemObject" )
set myfile = myfs.openTextFile( "myscores.txt", 1, true )
if myfile.atEndOfStream = false then score = myfile.readLine( )
