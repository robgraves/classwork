' Matthew Page CSCS1240 Spring 2014 andd() logic library function

preferred = "t"
notpreferred = "f"

Function andd( input1, input2 )
	andd = notpreferred
	if input1 = preferred then
		if input2 = preferred then
			andd = preferred
		end if
	end if
End Function