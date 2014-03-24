'Matthew Page CSCS1240 Spring 2014 color description based on a 
'RGB (red/green/blue with values between 0 and 255 for each

red = inputbox("Enter a number between 0 and 255 for red value: ")
green = inputbox("Enter a number between 0 and 255 for green value: ")
blue = inputbox("Enter a number between 0 and 255 for blue value: ")

if (red > blue) and (red > green) then
    most = red
if (blue > red) and (blue > green) then
    most = blue
if (green > blue) and (green > red) then
    most = green 

if (red < blue) and (red < green) then
    least = red
if (blue < red) and (blue < green) then
    least = blue
if (green < blue) and (green < red) then
    least = green

if (most = red) and (least = green) then
    middle = blue
if (most = red) and (least = blue) then
    middle = green
if (most = blue) and (least = red) then
    middle = green
if (most = blue) and (least = green) then
    middle = red
if (most = green) and (least = red) then
    middle = blue
if (most = green) and (least = blue) then
    middle = red

btnClicked = msgbox(middle & "-ish " & most & " with a bit of " & least)
