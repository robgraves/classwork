'Matthew Page CSCS1240 Spring 2014 color description based on a 
'RGB (red/green/blue with values between 0 and 255 for each

red = inputbox("Enter a number between 0 and 255 for red value: ")
green = inputbox("Enter a number between 0 and 255 for green value: ")
blue = inputbox("Enter a number between 0 and 255 for blue value: ")

If ((red > blue) And (red > green)) Then
    most = red
ElseIf ((blue > red) And (blue > green)) Then
    most = blue
Else '((green > blue) And (green > red))
    most = green 
End If
	
If ((red < blue) And (red < green)) Then
    least = red
ElseIf ((blue < red) And (blue < green)) Then
    least = blue
Else '((green < blue) And (green < red))
    least = green
End If
	
If ((most = red) And (least = green)) Then
    middle = blue
ElseIf ((most = red) And (least = blue)) Then
    middle = green
ElseIf ((most = blue) And (least = red)) Then
    middle = green
ElseIf ((most = blue) And (least = green)) Then
    middle = red
ElseIf ((most = green) And (least = red)) Then
    middle = blue
Else '((most = green) And (least = blue))
    middle = red
End If

	
btnClicked = msgbox(middle & "-ish " & most & " with a bit of " & least)
