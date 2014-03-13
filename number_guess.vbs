' Matthew Page CSCS1240 Spring 2014 Number_Guess visual basic script

Randomize
randomNumber = rnd( )
difficulty = Int(InputBox( "Welcome to the Random Number Guessing game. Please Choose a difficulty. Select 1 for Easy, 2 for Medium, or 3 for Hard: " ))

	If difficulty = 1 Then
		answer = Int((10) * randomNumber + 1)
		btnClicked1 = MsgBox( "Easy Difficulty -- Number Range: 1 to 10")
		diff_modifier = 10
		funcReturnedAnswer = numGuessFeedback(answer)
	ElseIf difficulty = 2 Then
		answer = Int((100) * randomNumber + 1)
		btnClicked2 = MsgBox( "Medium Difficulty -- Number Range: 1 to 100")
		diff_modifier = 100
		funcReturnedAnswer = numGuessFeedback(answer)
	ElseIf difficulty = 3 Then
		answer = Int((1000) * randomNumber + 1)
		btnClicked3 = MsgBox( "Hard Difficulty -- Number Range: 1 to 1000")
		diff_modifier = 1000
		funcReturnedAnswer = numGuessFeedback(answer)
	Else 
		btnCLicked4 = MsgBox( "Error, invalid entry." )
	End If


Function numGuessFeedback( funcAnswer )

	cheaterTesterClicked = MsgBox( "PC's number is: " & funcAnswer ) 'temporary line of code for testing purposes
	temperature_percentage_low = .75
	temperature_percentage_high = 1.25
	counter = 0
	done = false

		Do
			userGuess = Int(InputBox( "Please Choose a Number: " ))
			counter = counter + 1
				If userGuess = funcAnswer Then
					winClick = MsgBox( "YOU WIN!!!!!!!!" )
					score = diff_modifier * (4 - counter)
					scoreClick = MsgBox( "Score: " & score )
					tempvariable = highscore( score ) 'calling new function called highscore defined below to implement high scores file
					testMsgBoxReturn = MsgBox( "Congratulations " & tempvariable & "!") 
					done = true
				ElseIf userGuess < funcAnswer Then
					MsgBox( "Too low." )
						If userGuess >= (temperature_percentage_low * funcAnswer) Then
							lowHotClick = MsgBox( "You are hot..." )
						Else
							lowColdClick = MsgBox( "You are cold..." )
						End If
				Else
					MsgBox( "Too high" )
						If userGuess <= (temperature_percentage_high * funcAnswer) Then
							highHotClick = MsgBox( "You are hot..." )
						Else
							highColdClick = MsgBox( "You are cold..." )
						End If
				End If
		Loop Until done = true Or counter = 3

	numGuessFeedback = ( funcAnswer )

End Function

Function highscore( userScore )
	playerName = InputBox( "You have received a high score! Please enter your name: ")
	
	set fso = CreateObject("Scripting.FileSystemObject")
	set highScoresFile = fso.OpenTextFile("..\highscores.txt", 1, true) 
	
	Do Until highScoresFile.atEndOfStream = true
		name = highScoresFile.readLine( )
		score = highScoresFile.readLine( )
		nameScoreClicked = MsgBox( name & " " & score )
	Loop
	
	set highScoresFile = fso.OpenTextFile( "..\highscores.txt", 8, true )
	
	highScoresFile.writeLine( playerName )
	highScoresFile.writeLine( userScore ) 
	highScoresFile.close( )
	
	
	highscore = playerName
End Function