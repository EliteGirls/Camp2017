x = 1
while x == 1:
    x = input("Press 1 to continue and any number to end")
    if x!= 1: 
        break
        
    
    score = input("Enter a score")
    if score<=100 and score >=80:
        print "A"
    elif score >= 70 and score <=79:
        print "B"
    elif score <= 69 and score >= 60:
        print "C"
    elif score <= 59 and score >= 50:
        print "D"
    elif score <= 49 and score >= 45:
        print "E"
    else:
        print "F"

