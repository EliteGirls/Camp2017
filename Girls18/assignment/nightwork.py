
"""def addThreeNumbers(numOne,numTwo,numThree):
    print  (numOne+numTwo+numThree)
    
j = addThreeNumbers(1,5,8)

i  = addThreeNumbers(3,6,12)

print max(i,j);"""

numberOfGuesses = 0
while numberOfGuesses < 3:
    usersName=raw_input("Type your name ")
    if usersName=="Kotey":
        print"You are family"
        break
    else:
        print"Sorry you are my friend"
    
    numberOfGuesses=numberOfGuesses+1
    
    

