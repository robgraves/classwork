' Matthew Page CSCS1240 Spring 2014 logic library, 
' Apparently I had all of my logic functions nott(), andd() orr(), xorr() as
' separate files, and the desired state is to have all the logic functions in 
' one file, which is this file to be appended as needed to add more functions.

'declaring constants of preferred and notpreferred 
const preferred = 1
const notpreferred = 0

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
		if nandd( input1, input2 ) = preferred then
			xorr = preferred
		end if
	end if
End Function

'nandd function
Function nandd( input1, input2 )
	nandd = nott(andd( input1, input2 ))
End Function

'halfSum function
Function halfSum( input1, input2 )
	halfSum = xorr( input1, input2)
End Function

'halfCarry function
Function halfCarry( input1, input2 )
	halfCarry = andd( input1, input2)
End Function

'fullSum function
Function fullSum( input1, input2, carryIn)
	first_operation = halfSum( input1, input2 )
	fullSum = xorr( first_operation, carryIn )
End Function

'fullCarry function
Function fullCarry( input1, input2, carryIn )
	first_op = halfSum( input1, input2)
	firstAndGate = andd( first_op, carryIn )
	secondAndGate = andd( input1, input2 )
	fullCarry = orr( firstAndGate, secondAndGate )
End Function

'add function
Function add( input1, input2 )
	add = input1 + input2
End Function

'multiply function
Function multiply( input1, input2)  
	multiply = input1 * input2
End Function

'power (exponentiation) function
Function power( input1, input2 )
	power = input1^input2
End Function