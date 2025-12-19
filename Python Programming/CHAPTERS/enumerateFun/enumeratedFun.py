'''Enumerate in Python is used to loop over an iterable and automatically provide an index for each item.'''


s = [23,56,77,88,11,90,37,72]
index = 1
for j in s:
   print(index) 
   if(index == 4):
      print(j)
      break
   index +=1


# for index, j in enumerate(s):
#    print(index, "of", j)
    
   