x=1
while x==1: 
    
    print "Welcome to the WAEC grading system."
    print "what was your results?"
    marks=input("insert scores")
    if marks>=80 and marks <=100:
        print"GRADE A"
    elif marks>=70 and marks<=79:
        print"GRADE B"
    elif marks>=60 and marks<=69:
        print"GRADE C"
    elif marks>=50 and marks <=59:
        print"GRADE D"
    elif marks>=49 and marks<=45:
        print"GRADE E"
    else:
        print"You had an F"
        X=input("Enter 1 to continue or anynumber to quit")