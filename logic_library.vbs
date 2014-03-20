' Matthew Page CSCS1240 Spring 2014 logic library, 
' Apparently I had all of my logic functions nott(), andd() orr(), xorr() as
' separate files, and the desired state is to have all the logic functions in 
' one file, which is this file to be appended as needed to add more functions.

'declaring constants of preferred and notpreferred 
const preferred = "true"
const notpreferred = "false"

'nott() logic function
Function nott( input )
	if input <> preferred then
		nott = preferred
	else
		nott = notpreferred
	end if
End Function

'andd() logic function
Function andd( input1, input2 )
	andd = notpreferred
	if input1 = preferred then
		if input2 = preferred then
			andd = preferred
		end if
	end if
End Function

'orr() logic function
Function orr( input1, input2 )
	orr = notpreferred
	if input1 = preferred then
		orr = preferred
	else
		if input2 = preferred then
			orr = preferred
		end if
	end if
End Function

'xorr() logic function
Function xorr( input1, input2 )
	xorr = notpreferred
	if orr( input1, input2 ) = preferred then
		if nott(andd( input1, input2 )) = preferred then
			xorr = preferred
		end if
	end if
End Function