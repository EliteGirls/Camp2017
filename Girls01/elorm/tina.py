print ("HELLOOOOO")
name = raw_input("What is your name: ")
print ("WELCOME!!!")
def lessThan(age):
    if age < 5:
        print "can not enter"
    else:
        print "enter"
        print "WELCOME TO MY SHOP"
        print "We have malt and biscuit"
        print "Malt is four cedis and biscuit is seven cedis"
        want = raw_input("Do you want malt or biscuit : ")
        amount = input("How much do you have : ")
        if want =="malt":
            if amount > 4:
                change(amount,4)
            else:
                print "your money is not sufficient"
        elif want =="biscuit":
            if amount > 7:
                change(amount,7)
            else:
                print "your money is not sufficient"
 
def change(moneyGiven,price):
    change = moneyGiven - price
    print "Your change is " + str(change)
    
userAge = input("How old are you : ")
lessThan(userAge)

print "GOODBYE"