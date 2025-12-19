'''you can create getters and setters in python'''

#EXAMPLE : YOU ARE JUST USING A CAR NOT EVEN INTERESTED TO KNOW WHAT TYPE OF WIRE IS BEING USED INSIDE OF CAR.

#which helps you to use a function's return value as an object's property and can also set it.
#This can be useful for encapsulation and data validation.
       
'''Getters in Python are methods that are used to access the values of an object's properties. 
They are used to return the value of a specific property, and are typically defined using the @property decorator.'''



#creation of class
class myClass:
    
    #initialize constructor
    def __init__(self, value):
        self._val = value

    def value(self):
      return self._val
  
    def show(self):
        print(f"this value is {self._val}")
        
    #getter method    
    @property    
    def tenTimesValue(self):
        return 10 * self._val
    
    #setter method
    @tenTimesValue.setter    
    def tenTimesValue(self, _newVal):
        self._val = _newVal
        return 10 * self._val

# created an object
obj = myClass(10)

print(obj._val) #accessing value that you have passed

obj.show() # show calling method will return what is being written inside a show method.
print(obj.tenTimesValue) # you can't access a return value of this tenTimesValue method
# so to access it,  a getter method add a @property decorator above a method.

'''Setters
It is important to note that the getters do not take any parameters and we cannot set the value through getter method.
For that we need setter method which can be added by decorating method with @property_name.setter'''
obj.tenTimesValue = 1000 #error -> property 'tenTimesValue' of 'myClass' object has no setter
print(obj.tenTimesValue)
#so to set any value just create a clone of it and add @property_name.setter decorator above a method.
# and pass arguments of a new value you are being setting to a method.



