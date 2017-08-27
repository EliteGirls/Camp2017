i = 0
while i == 1:
    i = input("Press 1 to continue and any key to exit")
    if i != 1:
        break
    score=input("Your raw  score")
    if score <=100 and score >=80:
        print "A"
    elif score <=79 and score>=70:
        print "B"
    elif score <=69 and score>=60:
        print "C"
    elif score <=59 and score>=50:
        print "D"
    elif score <=49 and score>=45:
        print "E"
    elif score <=45:
        print "F"
    else:
        print "sorry not available"
