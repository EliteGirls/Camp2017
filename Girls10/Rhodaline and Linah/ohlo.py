c=1
while c ==1:
    c=input("press 1 to continue or any key to exit")
    if c!=1:
        break
score=input("please enter your score")
if score  <=100 and score >80:
                    print "A"
elif score<=79 and score >70:
                    print "B"
elif score<=69 and score >60:
                    print "C"
elif score<=59 and score >50:
                    print "D"
elif score<=49 and score >45:
                    print "E"
else:
                    print "F"  

    