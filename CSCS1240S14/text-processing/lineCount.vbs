'Matthew Page CSCS1240 Spring 2014 lineCount VBscript 

set fso = CreateObject("Scripting.FileSystemObject")
set MyFile = fso.OpenTextFile("linecounttext.txt", 1, False)
filedata = MyFile.ReadAll()

line_counter = 0
iteration_count = 1

char_read = Mid(filedata, 1, 1)

If char_read <> "" Then
	line_counter = 1
End If

While char_read <> ""
	char_read = Mid(filedata, iteration_count, 1)
	if char_read <> "" then
		ascii_char_read = asc(char_read)
	end if	
	if ascii_char_read = 13 then  'not sure yet if 13 (carriage retrun is the correct one)
		line_counter = line_counter + 1
	end if
	iteration_count = iteration_count + 1
	'msgbox(char_read & ascii_char_read)
Wend

btn = msgbox( "The number of lines in the file is: " & line_counter)