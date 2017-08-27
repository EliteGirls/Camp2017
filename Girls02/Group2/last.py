number=23
ama=input("enter number")
if ama==23:
	print "yeey,you've guessed it"
elif ama>number:
	print "Greater than"
else:
	print "less than"
	count = 0
	while count <9:
		count =count +1