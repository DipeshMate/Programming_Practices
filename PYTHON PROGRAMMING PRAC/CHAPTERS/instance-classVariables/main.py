'''Instance vs class variables
In Python, variables can be defined at the class level or at the instance level. 
Understanding the difference between these types of variables is crucial for writing efficient and maintainable code.'''


class Employee:
    #class variable
  company_name = 'Google'
  
  def __init__(self, name):
      self.name = name
      self.amount = 2.7 #instance variable
      self.age = 22  #instance variable
  def showDetails(self):
      print(f"I {self.name} {self.age} year old. I am Earning {self.amount} in {self.company_name}.")    

# emp1 = Employee('Armaan')
# print(emp1.name)
# emp1.showDetails() 
'''---or----'''
# Employee.showDetails(emp1) #I Armaan 22 year old. I am Earning 2.7 in Google.
# emp1.company_name = 'Apple'
# emp1.showDetails() # Apple

# emp2 = Employee('Ballu')
# emp2.company_name = 'Microsoft'
# Employee.showDetails(emp2) #I Ballu... Microsoft.



'''### ---------Class Variables-----------
Class variables are defined at the class level and are shared among all instances of the class. 
They are defined outside of any method and are usually used to store information that is common to all instances of the class.'''


# class MyClass:
#     class_variable = 0
    
#     def __init__(self):
#         MyClass.class_variable += 1
        
#     def print_class_variable(self):
#         print(MyClass.class_variable)
        

# obj1 = MyClass()
# obj2 = MyClass()

# obj1.print_class_variable() # Output: 2
# obj2.print_class_variable() # Output: 2



'''In the example above, the class_variable is shared among all instances of the class MyClass. When we create new instances of MyClass, the value of class_variable is incremented. 
When we call the print_class_variable method on obj1 and obj2, we get the same value of class_variable.

###----------Instance Variables------------------
Instance variables are defined at the instance level and are unique to each instance of the class. 
They are defined inside the init method and are usually used to store information that is specific to each instance of the class. '''


# class MyClass:
#     def __init__(self, name):
#         self.name = name
        
#     def print_name(self):
#         print(self.name)
# obj1 = MyClass("John")
# obj2 = MyClass("Jane")
# obj1.print_name() # Output: John
# obj2.print_name() # Output: Jane


'''In the example above, each instance of the class MyClass has its own value for the name variable. 
When we call the print_name method on obj1 and obj2, we get different values for name.'''