'Matthew Page CSCS1240 Spring 2014 nthWord VBscript 

set fso = CreateObject("Scripting.FileSystemObject")
set MyFile = fso.OpenTextFile("nthwordtest.txt", 1, False)
filedata = MyFile.ReadAll()

word_counter = 0
iteration_count = 1
word_returned = ""

char_read = Mid(filedata, 1, 1)

If char_read <> "" Then
	word_counter = 1
End If

wordRequest = Cint(inputbox("Please enter the number of the word from the file you want. Enter a number: "))

While word_counter <> wordRequest + 1
	char_read = Mid(filedata, iteration_count, 1)
	word_returned = word_returned & char_read 
	if char_read <> "" then
		ascii_char_read = asc(char_read)
	end if	
	if ascii_char_read = 32 then 
		word_counter = word_counter + 1
		if word_counter <> wordRequest + 1 then
			word_returned = ""
		end if
	end if
	iteration_count = iteration_count + 1
Wend

if wordRequest = 1 then
	btn = msgbox( "The " & wordRequest & "st word in the file is: " & word_returned)
elseif wordRequest = 2 then
	btn = msgbox( "The " & wordRequest & "nd word in the file is: " & word_returned)
elseif wordRequest = 3 then
	btn = msgbox( "The " & wordRequest & "rd word in the file is: " & word_returned)
else
	btn = msgbox( "The " & wordRequest & "th word in the file is: " & word_returned)
end if