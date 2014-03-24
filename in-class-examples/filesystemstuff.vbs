set myfs = createObject( "Scripting.FilesystemObject" )
set myfile = myfs.openTextFile( "myscores.txt", 1, true )
score = myfile.readLine( )
