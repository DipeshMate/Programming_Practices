# '''-----Normal function..!!---'''

# def square(x):
#   return x**x

# print(square(3))


# '''---Lambda Function // anonymous--- a function that have on expression and take any no. of arguments'''

# square = lambda x : x**x
# print(square(3))


# a = lambda x, y, z : x+y+z
# print(a(2,3,4))




# '''Normal Function'''

# def evenOdd(y):
#     print(y,'is a even number') if y % 2 == 0 else print(y,'is a odd number')

# evenOdd(10)    

# '''lambda function'''

# evenOdd = lambda y : print(y,'is a even number') if y % 2 == 0 else print(y,'is a odd number')

# evenOdd(10)

'''function in function call'''


'''normal function'''

# def cubeSqaure(x,y):
#     a = x*x*x
#     print(f'cube of {x} is',a)
#     b = y*y
#     print(f'sqaure root of {y} is',b)
#     return a + b

# print(cubeSqaure(2,3))
    
'''lambda function'''

# cubeSqaure = lambda x , y : print(f'cube of {x} is',x*x*x) , print(f'sqaure root of {y} is',y*y)

# cubeSqaure(3,3) 

'''normal + lambda => function as an argument'''

# def cubeSqaure(fx,value , y):
#     return fx(value) + y*y

# print(cubeSqaure(lambda x : x*x*x,2,4))


'''  -------------- ---------------- '''


def addMulti(fx,x,a,b):
    return fx(x) + (a+b)

print(addMulti(lambda x : x*x ,4, 3 , 3 ))