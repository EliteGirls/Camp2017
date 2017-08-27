print "Hello welcome to the WAEC grading system."

marks = input()

if(marks>=80 and marks<=100):
    print "GRADE A"
    
elif(marks>=70 and marks<=79 ):
    print "GRADE B"

elif(marks>=60 and marks<=69):
    print "GRADE C"
    
elif(marks>=50 and marks<=59):
    print "GRADE D"
    
else:
    print colored ("Sorry you had an F.Better luck if you decide to write NOVDEC",red)
    