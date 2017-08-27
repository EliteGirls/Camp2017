x=7
list=[]
while x==7:
    score = input("Enter a score") 
    
    print "welcome to the WAEC grading system."
    print "what was your results"   
    marks=input("insert scores")
    if marks>=80 and marks<=100:
        print "GRADE A"
    elif marks>=70 and marks <=79:
        print "GRADE B"
    elif marks>=60 and marks<=69:
        print "GRADE C"
    elif marks>=50 and marks<=59:
        print "GRADE D"
    elif marks>=45 and marks<=49:
        print "GRADE E"
    else:
        print "You had an F"
        x=input("Enter 1 to continue or anynumber to quit")


    