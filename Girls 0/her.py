endpoint=1
while endpoint==1:
   
        score= input("your score")
        if score<=100 and score>=80:
            print "A"
        elif score<=79 and score>=70:
            print "B"
        elif score<=69 and score>=60:
            print "C"
        elif score<=59 and score>=50:
            print "D"
        elif score<=49 and score>=40:
            print "E"
        else:
            print "F"
            
    endpoint=input("press 3 to continue else  quit")