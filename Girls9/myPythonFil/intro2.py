myScores=[80,90,74,86,94,86,100]
def sum(scores):
    c=0
    for i in scores:
        c=c+i      
    return c
#print sum(myScores)

def index(scores):
    largestSoFar = 0
    maxIndex = 0
    for i in range(0,len(scores)):
        if (scores[i] > largestSoFar):
            largestSoFar = scores[i]
            maxIndex = i
    print"The maximum score so far is " +str(largestSoFar) + "with an index of "+str(maxIndex)
    
index(myScores)

students = ["Hillary", "Edo", "Kunal"]
sports = ["tennis", "soccer", "basketball", "football"]


for i in students:
    for j in sports:
        print i + " loves "+ j
        
    