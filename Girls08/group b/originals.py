x=1
while x==1:
    number = input("press 1 to continue or any other to stop")
    if x!=1:
        break
    if number<=100 and number>=80:
        print "A"
    elif number<=79 and number>=70:
        print "B"
    elif number<=69 and number>=60:
        print "C"
    elif number<=59 and number>=50:
        print "D"
    elif number<=49 and number>=45:
        print "E"
    else:
        print "F"
   
