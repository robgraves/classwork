function getInput( prompt )
	do
		user = inputBox( prompt )
		if varType( user ) = 0 then wscript.quit()
	loop until user <> ""

	if isNumeric( user ) = true then 
		if Cdbl( user ) = Cdbl( CInt( user ) ) then
			user = CInt( user )
		else
			user = Cdbl( user )
		end if
	end if
	getInput = user
end function