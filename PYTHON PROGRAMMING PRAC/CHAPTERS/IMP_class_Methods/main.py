'''A class method is a type of method that is bound to the class and not the instance of the class.
In other words, it operates on the class as a whole, rather than on a specific instance of the class. 
Class methods are defined using the "@classmethod" decorator like
followed by a function definition. The first argument of the function is always "cls," which represents the class itself.
'''

# #---so for a whole class changes, we need a @classmethod decorator 


# class myWorld:
#     name = 'dipesh'
#     profile = 'developer'
    
#     def show(self):
#       print(f"this is {self.name}, a Software {self.profile}")
      
#     @classmethod
#     def changeDetails(cls,name,profile):
#         cls.profile = profile
#         cls.name = name



# a = myWorld()
# a.show()   
# a.name = 'mate'
# a.profile = 'analyst'
# print(a.name,a.profile) #only for a object (mate analyst)
# print(myWorld.name,myWorld.profile) # for a class (dipesh developer)
# print('------------------------------------------')

# # #---so for a whole class changes, we need a @classmethod decorator 
  
# myWorld.changeDetails('DMate','Analyst')
# # myWorld.changeDetails = 'Analyst'

# b = myWorld() 
# print(b.name,b.profile) # for a class ( DMate Analyst )
# print(myWorld.name,myWorld.profile) # for a class ( DMate Analyst )



# print('---------------------------------------------------------------------------------------')

'''class Methods as Alternative Constructors'''

# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     @classmethod
#     def from_string(cls, string):
#         name, age = string.split(',')
#         return cls(name, int(age))
 
# a = Person('Manoj',55)
# print(a.name,a.age) # Manoj 55

# string = 'dullu,24'

# b = Person.from_string(string)
# print(b.name, b.age) # dullu 24

# class Joystick:
#     name = 'Deep'
#     age = 20
    
#     # def __init__(self,name,age):
#     #     self.name = name
#     #     self.age = age
    
#     def _showDetails(self):
#         print(f'this is the best {self.name} and {self.age}')
    
#     @classmethod
#     def _showInfo(cls,name,age):
#         cls.name = name
#         cls.age = age
        

# a = Joystick()
# print(a.name, a.age) # Deep 20

# a._showDetails() # this is the best Deep and 20

# Joystick._showInfo('dipesh',22)
# print(a.name, a.age) # dipesh:22
# a._showDetails() # this is the best dipesh and 22



            