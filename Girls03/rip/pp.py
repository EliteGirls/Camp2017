numberOfGuesses = 0
while numberOfGuesses < 8:
    usersName = raw_input("Hi,please enter your name ")
    if usersName == "Kotey":
        print "You are family....."
        break
    else:
        print "Sorry, you are my friend."
        numberOfGuesses = numberOfGuesses + 1
        