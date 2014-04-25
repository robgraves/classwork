set fs = CreateObject("Scripting.FilesystemObject")
'set file = fs.opentextfile(".\charCount.vbs")
set file = fs.opentextfile("C:\Users\Rob\scripts\class\CSCS1240S14\charCount.vbs")
scriptCharCount = file.readall
executeglobal scriptCharCount

userInputString = InputBox("Please enter a string: ")
cnt = charCount( userInputString )
btn = MsgBox( cnt )