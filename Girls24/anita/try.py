"""
message = "Hello, World!"
print message[0:6]
special = [1,5,7,20,14]
print special[2:4]
print special[0:3]
print special[-3]
myList = ["A","B","C","D"]
myList.append('E')
print myList
more =["G","D","F","Z"]
myList.extend(more)
print myList
myList.insert(-2,"fufu")
myList.pop(3)
print myList
"""

fruits = ['orange','apple','pear','banana','kiwi','apple','banana']
nofp = fruits.count('pear')
print nofp
nofo = fruits.count('orange')
print nofo
nofa = fruits.count('apple')
print nofa
fruits.reverse()
print fruits