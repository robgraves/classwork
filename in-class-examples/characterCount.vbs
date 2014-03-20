'userInputString = InputBox("Please enter a string: ")
'cnt = charCount( userInputString )
'btn = MsgBox( cnt )

Function charCount( someString )
count = 1
	Do
		returned = Mid(someString, count, 1)
		count = count + 1
	Loop Until returned = ""
charCount = count - 2
End Function

