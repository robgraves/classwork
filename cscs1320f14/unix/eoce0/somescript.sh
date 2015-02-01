#!/bin/bash
#
# Run this script as follows: ./script 44 33 22 11 12 23 34 45 5 1 3 2 4
#

#function definition, not actually used here, but shows what will be executed when the function is called.
#this function is called process, and contains two commands within it. 
function process() {
    #sleep takes in the argument as an argument to sleep for a certaina mount of time.
    sleep   "$1"
    #this is then echoed the -n puts these all on the same line, which now we have to change to make it
    #not do, so I'm commenting out the original command to show the difference below:
    #echo -n "$1 "
    echo "$1"
}

#for loop, main execution which takes in ALL arguments and then runs the process function on each them in the background, then ends the loop with done.
for data in $*; do
    process "$data" &
done
#this line I tested directly by commenting out along with the subsequent line, but this suppresses the
#terminal prompt from coming back before the script is done running through completely
wait
#this final echo is more aesthetic in nature as it returns the prompt back on its own line after the
#data output from the script. Which btw is not needed once I edit the script to display a number on 
#each line, hence its currently commented out.
#echo

exit 0
