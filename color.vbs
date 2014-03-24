'Matthew Page CSCS1240 Spring 2014 color description based on a 
'RGB (red/green/blue with values between 0 and 255 for each

red = inputbox("Enter a number between 0 and 255 for red value: ")
green = inputbox("Enter a number between 0 and 255 for green value: ")
blue = inputbox("Enter a number between 0 and 255 for blue value: ")

If ((red > blue) And (red > green)) Then
    most = red
	moststring = "red"
ElseIf ((blue > red) And (blue > green)) Then
    most = blue
	moststring = "blue"
Else '((green > blue) And (green > red))
    most = green
	moststring = "green"
End If
	
If ((red < blue) And (red < green)) Then
    least = red
	leaststring = "red"
ElseIf ((blue < red) And (blue < green)) Then
    least = blue
	leaststring = "blue"
Else '((green < blue) And (green < red))
    least = green
	leaststring = "green"
End If
	
If ((most = red) And (least = green)) Then
    middle = blue
	middlestring = "blue"
ElseIf ((most = red) And (least = blue)) Then
    middle = green
	middlestring = "green"
ElseIf ((most = blue) And (least = red)) Then
    middle = green
	middlestring = "green"
ElseIf ((most = blue) And (least = green)) Then
    middle = red
	middlestring = "red"
ElseIf ((most = green) And (least = red)) Then
    middle = blue
	middlestring = "blue"
Else '((most = green) And (least = blue))
    middle = red
	middlestring = "red"
End If

	
btnClicked = msgbox(middlestring & "-ish " & moststring & " with a bit of " & leaststring)
