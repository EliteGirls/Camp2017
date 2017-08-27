usersName = raw_input("please enter your name: ")
guessNumber = 0
while guessNumber<3:#this called a loop
    guessNumber= guessNumber + 1
    code= raw_input("Hi, please hark this: ")
    if code =="Tina":
        print ("Congratulation")
        break#this ends the loop
    else:
        print (usersName + ", YOU ARE A THIEF, try again")
"""
usersAge = raw_input("How old are you: ")
print ("Hello, ") + usersName + (", you are ") + usersAge + (" 
years ! Nice to meet you")
nameNumber = input("How many times should print your name and age: ")
print ((usersName + ", you are " + usersAge + " years old. ") * nameNumber)

usersName = raw_input("Hi, please enter your name: ")
if usersName =="Tina ":
    print ("WELCOME TO YOUR PHONE")
else:
    print (usersName + ", YOU ARE A THIEF")
"""