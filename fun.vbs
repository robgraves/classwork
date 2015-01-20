function fun1( )
	var1 = var1 + 2
	fun1 = var1
end function

function fun2( )
	var1 = 1
	var1 = var1 + 2
	fun2 = var1
end function

var1 = 67

function fun3( var1 )
	var1 = var1 + 2
	fun3 = var1
end function

function fun4( var2 )
	var1 = var1 + 2
	fun4 = var1
end function

function fun5( )
	dim var1
	var1 = 9
	var1 = var1 + 2
	fun5 = var1
end function

result = fun5( )
btn = msgbox( result & ", " & var1 )

poop