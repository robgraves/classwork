' Matthew Page CSCS1240 Spring 2014 orr() logic library function

const preferred_orr = "true"
const notpreferred_orr = "false"

Function orr( input1, input2 )
	orr = notpreferred_orr
	if input1 = preferred_orr then
		orr = preferred_orr
	else
		if input2 = preferred_orr then
			orr = preferred_orr
		end if
	end if
End Function