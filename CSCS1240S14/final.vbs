

welcm = msgbox( "Welcome to Jeopardy!" )
first = msgbox( "BUZZER KEYS Player 1: A Player 2: B Player 3: L" )

CatSelect = cint( Inputbox( "Select category: 0 for America 1 for Animals 2 for Human Body 3 for Sports 4 for Solar System" ) )

Category = Array( America, "Animals", "Human Body", "Sports", "Solar Systems" )

Questions = Category( CatSelect )

dollarVal = cint( Inputbox( "Select category: 0 for 100 1 for 200 2 for 300 3 for 400 4 for 500" ) )
A100 = "Number of stars are there on the flag."
A200 = "Number of stripes are there on the flag."
A300 = "The largest state."
A400 = "The longest river."
A500 = "America is named for him."

A1 = "50" 
A2 = "13"
A3 = "Alaska"
A4 = "Mississippi"
A5 = "Amerigo Vespucci"

America = array( A100, A200, A300, A400, A500 )
AmericaAns = array( A1, A2, A3, A4, A5 )
question = America( dollarVal )
userAnswer = inputbox( question )

if userAnswer = AmericaAns( dollarVal ) then msgbox( "correct" )

Questions = Category( CatSelect )

dollarVal = cint( Inputbox( "Select category: 0 for 100 1 for 200 2 for 300 3 for 400 4 for 500" ) )
B100 = "This food makes up nearly all (around 99%) of a Giant Panda’s diet."
B200 = "This is the name of the phobia that involves an abnormal fear of spiders."
B300 = "The largest type of ‘big cat’ in the world."
B400 = "Female elephants are called this."
B500 = "The fastest land animal in the world."

B1 = "bamboo" 
B2 = "arachnophobia"
B3 = "tiger"
B4 = "cows"
B5 = "cheetah"

Animals = array( B100, B200, B300, B400, B500 )
AnimalsAns = array( B1, B2, B3, B4, B5 )
question = Animal( dollarVal )
userAnswer = inputbox( question )

if userAnswer = AnimalAns( dollarVal ) then msgbox( "correct" )





P1 = 0
P2 = 0
P3 = 0