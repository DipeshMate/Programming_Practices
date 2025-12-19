''''OOPs Concepts in Python --> OOPs is a way of organizing code that uses objects and classes to represent real-world entities and their behavior. 
In OOPs, object has attributes thing that has specific data and can perform certain actions using methods.

Class, Objects, Polymorphism, Encapsulation, Inheritance, Data Abstraction '''


'''
mainly there are two approaches that are used to write program.
1. Procedural Programming => in this we use function, in our program we use logic for example:- hello world
   we can make a multiple variable but we have to maintain.
   - so to maintain this in one, classes & object help us to to do maintain multiple code, now we can map with real world entities.


2. Object-Oriented Programming.-> example railway form :- railway form is class that is a blueprint/template for creating objects. 
   and passengeres are an objects having an entities which are made with the help of this blueprint. 
   here you can perform methods on objects like ex- shubham.changeName("Dipesh") or s.boardingStation() , s.ticketAmount() 
  -- you don't have to define methods, pass arguments again you just directly executed a method on this object. 
  
  key features of OOP in python - 
  encapsulations -> you can't run if it is in capsule , 
  inheritance ex railwayform -> railway special form ->  VIP FOOD, VIP form 

'''

# a class is a blueprint or a template for creating objects, providing initial values for state(variables or attributes)

# CREATING A CLASS
class Person:
   name = "Dipesh"
   age = 24
   occupation = "Software Developer"
   #this three are the properties in Person Class
   
   '''# default constructor'''
   def info(self): 
     print(f"{self.name} is a {self.occupation}")
   # above is a method in Person class
  
   # SELF is a ref to the current object and it used to access variables that belongs to the class for ex- 

# CREATING AN OBJECT 
# A = Person()
# b = Person()
# print(A),(b) # object


# Access of an object
# A.name = "Mate"
# A.occupation = 27
# print(A.name, A.age)  

# insertion to an object
# b.name ="Gitika"
# b.occupation = "HR"  
# print(b.name,b.occupation)

   # self means that object for which this method is called.
   # so self will work on a method which is being called
# A.info()
# b.info()

# c = Person() # creating C Object.
# c.info() # default value will get to C bcoz there is no declaration of value to c.
 
''' ----------------Constructor: helps to make an object, sometimes we want to create objects by passing arguments. and we want some dynamic changes of variables by creating different objects different values.
at that time, the constructor helps us to initialize something.------ '''
#1. parameterized constructor
#2. default constructor
# Syntax of python constructor
def __init__(self): # dunder method 
    pass
# this constructor will always run when we call a object