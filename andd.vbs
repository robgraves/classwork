' Matthew Page CSCS1240 Spring 2014 andd() logic library function

const preferred_andd = "true"
const notpreferred_andd = "false"

Function andd( input1, input2 )
	andd = notpreferred_andd
	if input1 = preferred_andd then
		if input2 = preferred_andd then
			andd = preferred_andd
		end if
	end if
End Function