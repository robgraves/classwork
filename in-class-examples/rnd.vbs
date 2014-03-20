Randomize

randomNumber = rnd( )

answer = Int(11 * randomNumber )

guessStr = InputBox( "Guess a number between 0 and 10" )

guessNum = CInt( guessStr )

if guess <> answer then btnClicked = MsgBox( "Fail!" ) else btnClicked = MsgBox( "You got it!" )
