' Matthew Page CSCS1240 Spring 2014 word count VBscript

set fso = CreateObject("Scripting.FileSystemObject")
set MyFile = fso.OpenTextFile("somefilewithwords.txt", 1, False)

'Class txtstream
'	str = MyFile 
'	Function testLength( str )
'		if str.length > 0 then 
'			str.ReadAll = TextStream.ReadAll()
'		else
'			str.ReadAll() = ""
'		end if
'	End Function
'End Class

'filedata = txtstream.testLength( MyFile.ReadAll )

filedata = MyFile.ReadAll()



word_counter = 0
iteration_count = 1

char_read = Mid(filedata, 1, 1)

'concept is to read in from file as a variable, character by character, and everytime we read a space character, assuming noting space as a word delimiter, separating words
' so starting with 0 words, if any character then 1 word, then every instance of a space increases the word counter variable until end of file, which will require a loop.

If char_read <> "" Then
	word_counter = 1
End If

While char_read <> ""
	char_read = Mid(filedata, iteration_count, 1)
	if char_read <> "" then
		ascii_char_read = asc(char_read)
	end if	
	if ascii_char_read = 32 then 
		word_counter = word_counter + 1
	end if
	iteration_count = iteration_count + 1
Wend

btn = msgbox( "The number of words in the file is: " & word_counter)
