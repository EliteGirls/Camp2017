myList = ["A","B","C","D"]
myList.append("E")
myList.append("F")
myList.append("G")
print myList
more=["G","D","F","Z"]
myList.extend(more)
print myList
myList.insert(2,"fufu")
myList.remove("C")
print myList
myList.pop(3)
print myList
fruits =['orange','apple','pear','banana','kiwi','apple','banana']
fruits.count('pear')
fruits.count('orange')
fruits.count('apple')
print fruits.count('apple')
