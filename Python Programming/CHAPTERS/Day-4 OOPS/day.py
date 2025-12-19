'''Mutable data types can be edited i.e., they can change at runtime. Eg – List, Dictionary,Sets etc.
Immutable data types can not be edited i.e., they can not change at runtime. Eg – String, Tuple, etc.'''

'''The set is an unordered collection of data types that is iterable, mutable and has no duplicate elements.
A dictionary in Python is an ordered collection of data values, used to store data values like a map.'''

'''-----------------List of Data Types in python------------'''

#### *********** all this collection of data types like list, tuple, set, dict are data structures because we can perform all the operations like insertion deletion updaton etc.


'''lists --> Mutable and ordered'''
# marks = [2,"hello",True]
# print(marks)

# marks.append("Bro")
# print(marks)

# marks.append("True")
# marks.append("hello")
# print(marks)

#-------list comprehension----> generate list on the fly

# lst = [i**i for i in range(5)] #any expression i+i, i**i
# print(lst)

seto = ["Milo", "Sarah", "Bruno", "Anastasia", "Rosa"]
check = { item for item in seto if 's' in item}
# print(check)
# justCheck ={ i for i in seto if 'a' in i}
# print(justCheck)

#-----methods

l = [11,45,1,3,88,7,2,1]
# l.append(22)
# l.insert(3,"Dipesh")
# l.sort()
# l.sort(reverse=True)
# l.reverse()
# l.index(1,6)
# l.count(1)
# l.extend(l2)
# new l = l.copy() or li[:]
# print(l)

# l2 = ["Ankush","Ayush",'Noman','rohit']

'''list comprehension'''
# a = [word for word in l2 if word.startswith('A')]
# print(a)

'''list unpacking'''

# l3 = ["Mahobe","Maulana"]
# n1,n2= l3
# print(n1)
# print(n2)

# if three values then ValueError: too many values to unpack (expected 2)


#---m is reference of L
# m = l
# m[0] = 0
# print(l)
# print(m)

#---- does'nt affect L

# m = l.copy()
# m[0] = 0
# print(l)
# print(m)


'''Note:----l + m or use extend method l.extend m '''
# m = l
# print(l+m)

# #---or---
# l.extend(m)
# print(l)


'''tuples --->> ordered & unchangeable(immutable) -->> ''' 

# tup =(1)
# tups = (1,)
# print(type(tup), type(tups))

tuttt = (68, True, 'jh')
# or tuttt.append('ANkit') then also error bcoz immutable but with the help of list you can  add below watch exmaples
# tuttt[0] = 69 # does'nt support item assignment
# print(tuttt)


#---slicing in tuple [start : end : jumpIndex] -> makes new tuple


#---tuples methods---

'''convert indirectly adding removing'''
# t = list(tuttt)
# t.append('mate')
# t[0] = 69
# t.pop(1)

# tuttt = tuple(t)
# print(tuttt)


'''Sets -->>(mutable) unordered & no Duplicates , unchangeable same like tuple but here have methods'''

# students = {'hello',5642,True,9.66}
# print(students,type(students))

# students.add("dipesh")
# students.add('hello')
# students.add('hello')
# students.add(True)
# print(students)


# info = {"Carla", 19, False, 5.9,19}
# harry = set()
# print(type(harry))

# for value in info:
#   print(value)

# s = {2, 4, 2, 6}
# k = {1,3,6,4,7}
# # res = s.union(k)
# # s.update(k)
# # s.intersection(k)
# # s.difference(k)
# print(s)


'''dict -->(mutable) Unordered changeable no duplicates'''

itemmms = {'name': 'dipesh','age': 27, 'address': 'durg'}
# print(items)
# print(items.keys())
# print(items.values()) 
# print(items.items())

# for i,j in itemmms.items():
# print(f"the keys is {i} and the values is {j}")    
 
# print(items.get('add'))
# items.clear()
# items.pop('age')
# items.popitem()

# del items['add']
# del itesm # items are not defined