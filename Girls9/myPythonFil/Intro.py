'''
x=[1,2,3,4,5,6,7,8,9,10]
for i in x:
    print i
    
print " "
x=range(1,11)
for i in x:
    if i%2==0:
        print i
        print " "

names=["Hillary","Edo","Lani","Gloria","Joy"]
    
for y in names:
    if len(y)>5:
        print "Oops you have a very long name "+ y
def longestName(name1,name2):
    if len(name1)>len(name2):
        return name1
    else:
        return name2
    
print longestName("Gloria","Edo")

#raw_input is used to get a string from thr user
#input would be used for a number
name=raw_input("Hi, my name Hillary. What's your name?")
print longestName("Hillary",name)

age=input("How old are you?")
print "In 20 years you would be"+ " "+str(age+20)

'''

'''right=0
print"\nHello I'm Hillary,Lets begin a fun game\n"
name= raw_input("Whats your name?  >>> ")
age= input("How old are you? \n")
print "Welcome"+ " " + name +","+ "you are"+" " + str(age) + " "+"lets begin"
    
answer1=raw_input("1.What is the capital of Ghana?\n(a)Accra (b)Legon (c)India \n")
if answer1=="a":
    print("Wow youre right")
    right+=1
else:
    print("Sowwwiiiii")
    
answer2=raw_input("1.What is the capital of Nigeria?\n(a)Lagos (b)Abuja (c)New Dehli \n")
if answer2=="a":
    print("Wow youre right")
    right+=1
else:
    print("Sowwwiiiii")
    
    
print("At the end of this game you had"+" " +str(right) +" " + "rights and the rest wrong")
    

numbers=[2,4,6,8,10]
for x in numbers:
    c=x*x
    print c'''
    
big=[2,4,7,8]
for i in big:
    c=max(big)
    x=big[c]
    print(str(c)+ "and"+ str(x))