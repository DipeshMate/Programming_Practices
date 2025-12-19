'''HIGHER ORDER FUNCTION-->> MAP, FILTER , REDUCE'''

'''------------- Map Function with lambda function  ------------'''

'''method 1'''

# def cube(x):
#   return x*x*x

# print(cube(3))

# li = [1,2,3,4,5,6,7,8,9,]
# newList = []

# for i in li:
#   newList.append(cube(i))

# print(newList)  

''' method 2'''
'''--------map function return map object -> map(function(), iterable)--------'''
# li = [1,2,3,4,5,6,7,8,9]
# newlist = list(map(lambda x : x*x*x,li))
# print(newlist) 


'''--------------FILTER Method----------------'''
'''filter Input & Output both take sequnece of elements return true or false '''
# def evenOdd(a):
#   return a % 2 == 0

# l = [12,11,44,31,68,91,57,80,92]

# newnewL = list(filter(evenOdd,l))
# print(newnewL)




'''----------- REDUCE FUNCTION -->> It has to import Everytime-------------------'''

from functools import reduce

arr = [2,6,7,3,2,5,6,9,3]

sum = reduce(lambda x , y : x + y, arr)
print(sum)
