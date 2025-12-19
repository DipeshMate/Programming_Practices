#concept of oops
'''When a class derives from another class. 
The child class will inherit all the public and protected properties and methods from the parent class. 
class BaseClass:
  Body of base class
class DerivedClass(BaseClass):
  Body of derived class
  
  Types of inheritance:
Single inheritance
Multiple inheritance
Multilevel inheritance
Hierarchical Inheritance
Hybrid Inheritance
'''
class Employees:
    def __init__(self, name, id):
        self.name = name
        self.id = id
    
    #utility methods
    def showDetails(self):
        print(f"the name of Employee:{self.id} is {self.name}")
        
#here, you can't change class Employee name and use its properties
#you have to use inhertance concept

class Programmer(Employees):
    
    def showLanguage(self):
        print(f"The default language is python")
    

class Coders(Programmer):
    
    def showCoding(self):
        print(f"Coding is done by Python {self.id}")        

'''--- Parent/ Base Class---'''
e = Employees("Choman Das",24)
e.showDetails()

'''--- Child Class---'''
f = Programmer("Bhawan Das",42)
f.showDetails()
f.showLanguage()

g = Coders("Doman Das", 25)
g.showDetails()
g.showCoding()