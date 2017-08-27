ones = [0, 3, 3, 5, 4, 4, 3, 5, 5, 4]
tens = [0, 3, 6, 6, 6, 5, 5, 7, 6, 6]
teens =[0, 6, 6, 8, 8, 7, 7, 9, 8, 8]

def convert(num):
    if num > 10 and num < 20:
        teenDigit = teens[num%10]
        return teenDigit
    else:
        onesDigit = ones[num%10]
        tensDigit = tens[num/10]
        total = onesDigit + tensDigit
        return total
    

number = input('Enter a number')

while number!= 4:
    print str(number) + ' is ' + str(convert(number)) + ' letters long'
    number = convert(number)
    
print '4 is magic!'

#choice = input('Do you want to play again? Y/N')
#if choice == 'Y':
    

    
    
    
    
    
