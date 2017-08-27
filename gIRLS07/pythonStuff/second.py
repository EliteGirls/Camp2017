'''
animals=['frog','dog','cat']
animals.insert(2,'mouse')

letters=['a','b','c']
animals.extend(letters)
print animals
for i in animals:
    if i[0]=='c':
        print i
        
x=0
while x<10:
    x=x+1
    print x
   
for i in range(10):
    print i*i
'''
    
#this adds the elements in a list  
scores=[97,34,56,23]
def add(listOfScores):
    sum=0
    for i in listOfScores:
        sum+=i
    return sum
print add(scores)
 
maxscores =max(scores)
print maxscores
maxindex = scores.index(maxscores)

print "the student at "+ str(maxindex)  +" had "+str(maxscores)
for i in scores:
    if i%2==0:
        print str(i) + " is even"
    else:
        print str(i) + " is odd"
        
#num = input("give me a number")
#name = raw_input("give me a string")
password="lois"
guess =raw_input("guess the password")
while guess!="lois":
    print "keep trying"
    guess =raw_input("guess the password")
print "Congrats! You're in"



    
    

    