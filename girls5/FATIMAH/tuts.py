"""
snot = 0
while snot <  10:
    #print "i will never sleep in class again"
    print snot
    snot = snot + 1

"""
  


guesses =0
while guesses < 5:
    usersName = raw_input("hello, whats your favourite movie") 
    guesses = guesses + 1
    if usersName == "LUCY":  
        print "Welcome to the favourite movie entitled LUCY...."
        break
        
    
    else:
        print "Work on your movie taste."
        print "you have "+ `5 - guesses` +" guesses left"

""""
print "hello," + usersName + " ! great! so you are welcome to windows! "
print ((usersName[0]+ " ")* 100) 
"""