#print 'helloworld'
#print "i am happy"
#def highestNumber (num1):
#    print "the highest number is "
#    y= max (num1 )
#    return y
#print highestNumber([1,2,2,4,7,9,6])
#fruits =['apple', 'mango','pineapple','orange' ]
#countries =['Ghana',  'Asia',' India']  
#def listSum (list1,list2):
#   for element1 in list1:
#        for element2 in list2:
#           if  len(element1+element2)>10:
#                print"Answer : "+ element1 +" "+ element2
#print listSum(fruits,countries)                
#
#fruits =['apple', 'mango','pineapple','orange' ]
#countries =['Ghana',  'Asia',' India'] 
#
#def createDict (list1,list2):
#    listDict ={}
#    for element1 in list1:
#        for element2 in list2:
#            if  len(element1+element2)>10:
#                if element1 not in listDict:
#                    listDict[element1]= [element2]
#                else:
#                     
#                    listDict[element1].append(element2)
#    return  listDict               
#                
#
#print createDict(fruits,countries)   
#
#


def reverse(string):
    length = len(string)
    index = 1
    reversedString = ""
    while (index <=length):
        reversedString = reversedString + string[length-index]
        index += 1
    return reversedString

        

# return True if palindrome, else return false
def isPalindrome(string):
    if string == reverse(string):
        print 'True'
    else:
        print 'False'


isPalindrome('racecar')
isPalindrome('ghana')
isPalindrome('abcdef')

