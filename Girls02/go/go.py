stop = 1
while stop == 1:
	stop=input("press 1 to continue or any key to exit")
	score = input("Your score")
	if score <=100 and score >=80:
		print "A"
	elif score <=79 and score >=70:
		print "B"
	elif score <=69 and score >=60:
		print "C"
	elif score <=59 and score >=50:
		print "D"
	elif score <=49 and score >=45:
		print "E"
	else:
		print "F"

	
	 