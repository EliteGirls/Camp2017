''' 
myList = [1,2,3,4,5,6,7,8,9,10]

            
#create checkNumber func that checks if a number is divisible by 2
def checkNumber(anyList):
    for x in myList:
        if x % 2 == 0:
            print( str(x) + " Is divisible by 2")
        else:
            print( str(x) + " Is not divisible by 2")
    #end of for loop
#end of func
            
#Task: Create and print elements in a dictionary           
checkNumber(myList)

test = {}
test['Greater Accra'] = 'Accra'
test['Ashanti'] = 'Kumasi'
test['Eastern'] = 'Aburi'

print test['Greater Accra']
print test['Ashanti']

# end of task


#Function that checks the difference between two numbers
def difference(x, y):
    return x-y
    
 #end of function  
 
result = difference(7,8)
print(result)

#Function that cmyList = [1,2,3,4,5,6,7,8,9,10]
def averageCal(anyList):
    listLength = len(anyList)
    sum = 0
    average = 0
    
    for x in anyList:
        sum += x
        
    average = sum /listLength
    
    return average

myList = [1,2,3,4,5,6,7,8,9,10]

result = averageCal(myList)
print(result)
'''

'''
#here I made a function call listIncrease that increases members in a list by 5
def listIncrease(anyList):
    listLength = len(anyList)
    for x in range(listLength):
        anyList[x]+=5
        
    return anyList
    #end of listIncrease func.

myList = [1,2,3,4,5,6,7,8,9,10]

myList = listIncrease(myList)

print(myList)
'''




'''
#Function that identifies the largest number in a list
def largerNumberChecker(anyList):
    listLength = len(anyList)
    large = 0
    for x in range(listLength):
        for y in range(listLength):
            if anyList[x] > anyList[y]:
                large = anyList[x]
    
    return large
#end of the function largerNumberChecker

myList = [1,2,3,4,5,6,7,8,9,10]
result = largerNumberChecker(myList)
print(result)

# Function that checks for the smallest number
def smallerNumberChecker(anyList):
    listLength = len(anyList)
    smallNo = 0
    for x in range(listLength):
         if anyList[x] < anyList[x-1]:
                smallNo = anyList[x]
                
    
    return smallNo
#end of the function smallerNumberChecker

myList = [1,2,3,4,5,6,7,8,9,10]
result = smallerNumberChecker(myList)
print(result)

'''








value_entered = input('PLEASE ENTER A NUMBER TO VIEW YOUR TRIANGLE: ')
while value_entered > 9 or value_entered < 0:
    print('Dude really! Come on try again following the instructions:')
    print(' ')
    value_entered = input('PLEASE ENTER A NUMBER TO VIEW YOUR TRIANGLE: ')
print('GREAT! NOW WE ARE IN BUSINESS')

for i in range(value_entered+1):
    for j in range(i):
        print i,
    print ''