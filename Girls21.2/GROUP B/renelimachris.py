while 1==1:
    score=input("enter your score")
    if score <=100 and score >=80:
             print "A"
    elif score <=79 and score>=70:
          print "B"
    elif score <=69 and score>=60:
         print "C"
    elif score <=59 and score >=50:
         print "D"
    elif score <=49 and score >=45:
         print "E"
    else:
         print "F"
    print "Type 'yes' to continue"
    print "Type 'no' to stop"
    continueGrading =raw_input("Enter word of choice")
    if continueGrading =="no":
        break                                