'''Long Method'''

# f = open("message.txt",'r')
# text = f.read()
# print(text)
# g = open('message.txt','a')
# add = g.write('Enjoy Your Day To The Fullest \n')
# print(add)

# f = open("FileIO/msg1.txt",'w')
# text = f.read()
# print(text)

# with open("FileIO/msg1.txt",'a') as F: F.write("THIS IS DIPESH MATE!! \n")

'''Short Hand Method'''

with open('myFile.txt','a')as f: f.write('Hey Chill Everything will be fine!! \n') 

'''Other Methods to read & Write '''

'''read'''
#f = open('myFile.txt','r')

# i = 0
# while True:
#  i = i + 1
#  line = f.readline()
#  if not line:
#    break
#  m1 = line.split(',')[0]
#  m2 = line.split(',')[1]
#  m3 = line.split(',')[2]
 
#  print(f"marks of student {i} in Eng is {m1}")
#  print(f"marks of student {i} in Maths is {m2}")
#  print(f"marks of student {i} in Sci is {m3}")
#  print(line)

'''write'''
# g = open('myFile.txt','w')

# lines = ['hello','whats','up']
# for line in lines:
#     g.write(str(line) + '\n')
# g.close()  
    
'''Seek'''

# with open('myFile.txt','r') as f:
#  data = f.read()
#  k = f.seek(5)
#  l = f.tell()
#  print(k, l )
#  print(data)



