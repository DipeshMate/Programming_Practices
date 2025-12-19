'''---------------- is & == -------------------'''
# is keyword compares the exact location of object in memory.
# == operator compares the values.

# a = [1,2,3] #list data type
# b = [1,2,3]


# print(a==b)
# print(a is b)

# c = (1,2,3) #tuple dataType
# d = (1,2,3)

# print(c==d)
# print(c is d)

# e = 3
# f = 3

# print(e==f)
# print(f is f)


'''Using the *, the variable that we associate with the * becomes iterable meaning you can do things like 
iterate over it, run some higher-order functions such as map and filter, etc.'''

# def myFun(arg1,*args):
#     print(f'this is first {arg1}')
#     for arg in args:
#        print(f'{arg}')    

# myFun('hey','hello','world')    


'''---------object introspection-----------'''\
'''
dir() ---> to know the list of methods that can be used in datatypes
_dict_ --> this method shows as a dictionary datatype
help() --> show all code..i.e all attributes variables etc..
'''

# a = ['12','dipesh','mate','true']
# print(a)
# print(a.__dict__(a))
# print(dir(a))
# print(help(a))


'''---------------dunder/magic methods-------------
These are special methods that you can define in your classes, and when invoked, they give you a powerful way to manipulate objects and their behaviour.

---Magic methods, also known as “dunders” from the double underscores surrounding their names, are powerful tools that allow you to customize the behaviour of your classes. 
They are used to implement special methods such as the addition, subtraction and comparison operators, as well as some more advanced techniques like descriptors and properties.
'''

# class Employee:
#   name = 'Jaydev'
  
#   def __len__(self):
#       i = 0
#       for c in self.name:
#           i += 1
#       return i
  
#   def __reversed__(self):
#       i = ""
#       for c in self.name:
#           i = c + i
#       return i      

# a = Employee()
# print(a.name)
# print(len(a))
# print(reversed(a))      



# if __name__ == "__main__":
#   pass
    
#  __name__ is a special variable in Python that is used to determine if a module is being run as the main program or if it is being imported into another module.
#  When a module is run as the main program, __name__ is set to "__main__".
#  When a module is imported into another module, __name__ is set to the name of the module.
#  This is useful for writing test code or for providing a command-line interface to your module.
#  The if __name__ == "__main__": block is a common idiom in Python that allows you to write code that will only be executed when the module is run as the main program.

# a module is a file containing Python code that can be imported and used in other Python programs.
#  Modules can contain functions, classes, and variables, and they can be used to organize and reuse code.
#  Python has a large standard library of built-in modules, and you can also create your own modules by saving Python code in a file with a .py extension.

# "__main__" is a special name in Python that refers to the top-level script environment.

# so by checking: if __name__ == "__main__":, you can determine if the script is being run at the TOP level or not or if it is being imported as a module in another script.
#  When a Python script is run, the interpreter sets the __name__ variable to "__main__" for that script.
#  This allows you to write code that will only be executed when the script is run directly, rather than when it is imported as a module in another script.