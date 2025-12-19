'''Access Specifiers/Modifiers
Access specifiers or access modifiers in python programming are used to limit the access of class variables and class methods outside of class while implementing the concepts of inheritance.

Types of access specifiers
1-- Public access modifier -> [self.]Any instance variable in a class followed by the ‘self’ keyword ie. self.var_name are public accessed. 
Theoretically, public methods and fields can be accessed directly by any class.

2--Private access modifier -> [self.__] , to access [my_object._MyClass__mangled_attribute] 
Name mangling in Python is a technique used to protect class-private and superclass-private attributes from being accidentally overwritten by subclasses. 
Names of class-private and superclass-private attributes are transformed by the addition of a single leading underscore and a double leading underscore respectively.
Theoretically, private methods and fields can be only accessed within the same class it is declared.
3--Protected access modifier
Theoretically, protected methods and fields can be accessed within the same class it is declared and its subclass.
'''

'''---------Private Access Modifier--------'''

class Employees:
  def __init__(self,firstName, lastName):
      self.__first = firstName
      self.__last = lastName
  
  def _showDetails(self):
      print(f"this is not private Employees name: {self.__first} {self.__last}")
  def __showDetails(self):
      print(f"this is private Employees name: {self.__first} {self.__last}")


a = Employees('joy','lobo')
#print(a.__first) #mangling
a._showDetails() #not private function
a._Employees__showDetails() #private function


