\# ask the user to guess a number 

def getmiddle(t,y):
    return (t + y) / 2

getmiddle(1,100)

print 'Please guesss a nnumber and do not tell me, I will guess your number! User has to type higher,lower, or correct'
print '\n\n'
beg = 1
end = 100
middle = (beg + end) / 2
userInput= raw_input("Is your number " + middle"?\n")
 
if userInput== "higher":
    beg = middle + 1
    middle = (beg + end) / 2
    userInput== raw_input("Is your number 75?\n")
elif userInput =="lower":
    #guess another number
    userInput== raw_input("Is your number 25?\n")
elif userInput =="correct":
    #done
    print 'Done'
else:
    print 'Invalid'


#x = 50
#if x == 3:
#    print 'yes x is 3'
#elif x == 5:
#    print 'hello'
#else:
#    print ' x is not 3'