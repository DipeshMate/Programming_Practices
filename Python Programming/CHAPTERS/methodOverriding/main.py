'''-------overRiding--------'''
'''Method overriding is a powerful feature in object-oriented programming that allows you to redefine a method in a derived class. 
   The method in the derived class is said to override the method in the base class. When you create an instance of the derived class 
   and call the overridden method, the version of the method in the derived class is executed, rather than the version in the base class.'''

class Circle:
    r= 4
    def area(self):
        print('Calculating area....') 

class Shape(Circle):    
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        print("Calculating area of a circle...")
        super().area()
        return 3.14 * self.radius * self.radius
    
a = Shape(4)
print(a.area())

    