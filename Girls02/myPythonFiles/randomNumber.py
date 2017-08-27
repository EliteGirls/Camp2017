import random
randomNumber = random.randint(1,100)

#I create a variable guess that stores the user's guess
guess = str(input('Guess a number between 1 and 100, you have 5 guesses'))

if type(guess)!= int:
    guess = input('Input is invalid, type a number ')
    
#I create a counter that gets one added to it every loop
counter = 0

while guess != randomNumber and counter <5 :
    if guess > randomNumber:
        print 'Your guess is too high, try again'
        guess = input('Guess again')
    else:
        print 'Your guess is too low, try again'
        guess = input('Guess again')
    counter +=1 #add one to the counter
#end of while loop
        
if guess == randomNumber:
    print 'You guessed right! Well done'
else:
    print 'The random number is ' + str(randomNumber)
        
        
        