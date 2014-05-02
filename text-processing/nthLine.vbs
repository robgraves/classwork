'Matthew Page CSCS1240 Spring 2014 nthLine VBscript 

set fso = CreateObject("Scripting.FileSystemObject")
set MyFile = fso.OpenTextFile("nthlinetest.txt", 1, False)
filedata = MyFile.ReadAll()