from termcolor import colored

def getrude(x):
    if x =="lois":
        return x + " is the best" 
    return x + " is cool"
    
while 1 == 1:
    userInput = raw_input("say your name ")
    if userInput == "exit":
        break
    myString = getrude(userInput)
    if userInput =="Eunice":
        print colored(myString,'yellow')
    elif userInput =="Andrew":
        print colored(myString,'blue')
    else: 
        print colored(myString,'green' )
    
    
        
                                                                                        