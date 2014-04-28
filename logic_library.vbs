' Matthew Page CSCS1240 Spring 2014 logic library, 

'declaring constants of preferred and notpreferred 
const preferred = "1"
const notpreferred = "0"

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
Function addd( input1, input2 )
	carryIn = "0"
	iteration = 1
	total = ""
	binaryNum1 = revString(input1)
	binaryNum2 = revString(input2)
	endConditionLength = len(input1)
	Do
		char_read_bin1 = Mid(binaryNum1, iteration, 1)
		char_read_bin2 = Mid(binaryNum2, iteration, 1)
		column_sum = fullSum(char_read_bin1, char_read_bin2, carryIn)
		carryIn = fullCarry(char_read_bin1, char_read_bin2, carryIn)
		total = total & column_sum
		iteration = iteration + 1
	Loop Until iteration = endConditionLength + 1
	addd = revString(total)
End Function

'multiply function NOT FUNCTIONING YET
Function multiplyy( input1, input2) 
	product = 0
	counter = 0
	Do
		product = product + input1
		counter = counter + 1 
	Loop Until counter = input2 - 1
	multiplyy = product
End Function

'power (exponentiation) function NOT FUNCTIONIGN YET
Function powerr( input1, input2 )
	result = 0
	counter = 0
	Do
		result = result * input1
		counter = counter + 1
	Loop Until counter = input2 - 1
	powerr = result
End Function

Function revString(input_string)
	new_string = ""
	pos = 0
	Do
		new_string = new_string & mid(input_string, len(input_string)-pos, 1)
		pos = pos + 1
	Loop Until pos = len(input_string)
	revString = new_string
End Function