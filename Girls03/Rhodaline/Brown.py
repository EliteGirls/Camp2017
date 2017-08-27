numberOfGuesses = 0

while numberOfGuesses < 6:
   # usersName = raw_input("Hi,please enter your name ")
#print "Hi , " + usersName + "! How are you!"
#nameNumber = input("How many times should I print your name?")

#print ((usersName + " ") * nameNumber)
#if usersName == "Kotey":
    """
    print "Kotey is family!!!!"
    else:
    print "Sorry!!!! you are not family." 
    """
    if usersName == "Kotey":
        print "You are family....."
        break
    else:
        print "Sorry, you are my friend."
        numberOfGuesses = numberOfGuesses + 1