'Matthew Page CSCS1240 Spring 2014 nthLine VBscript 

set fso = CreateObject("Scripting.FileSystemObject")
set MyFile = fso.OpenTextFile("nthlinetest.txt", 1, False)
filedata = MyFile.ReadAll()

line_counter = 0
iteration_count = 1
line_returned = ""

char_read = Mid(filedata, 1, 1)

If char_read <> "" Then
	line_counter = 1
End If

lineRequest = Cint(inputbox("Please enter the number of the line from the file you want. Enter a number: "))

While line_counter <> lineRequest + 1
	char_read = Mid(filedata, iteration_count, 1)
	line_returned = line_returned & char_read 
	if char_read <> "" then
		ascii_char_read = asc(char_read)
	end if	
	if ascii_char_read = 13 then 
		line_counter = line_counter + 1
		if line_counter <> lineRequest + 1 then
			line_returned = ""
		end if
	end if
	iteration_count = iteration_count + 1
Wend

if lineRequest = 1 then
	btn = msgbox( "The " & lineRequest & "st line in the file is: " & line_returned)
elseif lineRequest = 2 then
	btn = msgbox( "The " & lineRequest & "nd line in the file is: " & line_returned)
elseif lineRequest = 3 then
	btn = msgbox( "The " & lineRequest & "rd line in the file is: " & line_returned)
else
	btn = msgbox( "The " & lineRequest & "th line in the file is: " & line_returned)
end if