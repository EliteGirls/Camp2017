#usersName= raw_input("hi please enter your name")
##print"Hi," +usersName + "! Good Morning!"
#
#cow =input ("how mant times should i duplicate your name?")
#    
#print ((usersName + " ") * cow)
#usersFavPet= raw_input("what is the name of your favourite pet")
#print (usersName  +  usersFavPet + "is really cool")
#

guesses = 0
while guesses < 3:
    userName = raw_input("type in your surname:   ")
    if userName == "templeton" or userName == "oppong":
        print userName +" is a nice name "
        break
    else:
        guesses = guesses + 1
        print "Writer of code does not know that that surname even exits....."
    if userName=="whitney":
        print userName +"You entered my favourite name so you get another chance to try again"
        guesses = 0 
    print ( str(guesses)+ " is the number of guesses")
    print (`1` + "is the number of guesses left")
#    while guesses < 3:
#            else:
#                guesses = guesses + 1
#        print ( guesses+ " is the number of guesses")
#        print (" HAVE A NICE EVENING ")
#        
#sheep = "this is handsome"   
#print len("this is handsome")

