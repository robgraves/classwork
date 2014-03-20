' Matthew Page CSCS1240 Spring 2014 nott() logic library function

const preferred_nott = "true"
const notpreferred_nott = "false"

Function nott( input )
	if input <> preferred_nott then
		nott = preferred_nott
	else
		nott = notpreferred_nott
	end if
End Function