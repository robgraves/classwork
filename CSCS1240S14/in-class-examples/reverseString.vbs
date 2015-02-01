Function RevWord(input_string)
	new_string = ""
	pos = 0
	Do
		new_string = new_string & mid(input_string, len(input_string)-pos, 1)
		pos = pos + 1
	Loop Until pos = len(input_string)
	RevWord = new_string
End Function

word = "abcdef"
drow = RevWord(word)
btn = msgbox(drow)