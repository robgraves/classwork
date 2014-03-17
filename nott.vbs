' Matthew Page CSCS1240 Spring 2014 nott() logic library function

const preferred = "t"
const notpreferred = "f"

Function nott( input )
	if input <> preferred then
		nott = preferred
	else
		nott = notpreferred
	end if
End Function