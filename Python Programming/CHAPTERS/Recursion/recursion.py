'''factorial'''

def fact(n):
    if n <=1: return 1
    return (n * fact(n-1))

# if n <= 0:
#     print("Please enter positive number")
# else:
#     print("Factorial of",n,"is:-")
#     for i in range(1,n):
#         print(fact(i))    

# '''Fibonacci series'''
def fibo(n):
  if n == 0 : 
      return 0
  if n == 1 : 
      return 1
  
  return (fibo(n-1) + fibo(n-2))

n= 10
if n <= 0:
   print("Plese enter a positive integer")
else:
   print("Fibonacci sequence:")
   for i in range(n):
       print(fibo(i),end=' ')

