marks = [6,"dipesh",45.7,True]
print(marks)

print('yes') if 6 in marks else print('no')
print('yes') if 'esh' in 'dipesh' else print('no')

print(marks[:1:2]) #slicing
print(marks[1:1:]) #slicing
print(marks[:])

'''---F-string--->> new formatting string'''
txt = "Hey I am {1} and i am from {0}"
name = "Dipesh"
city = "durg"

print(txt.format(name,city))

#---or---

print(f"Hey I am {name} and i am from {city}")

print(f"We use f-strings like this: Hey my name is {{name}} and I am from {{city}}")

'''Python docstrings are the string literals that appear right after the definition of a function, method, class, or module.'''

def square(n): 
    #print(n) --> docstring is none if we put any method just after the funcytion_name
    '''Takes in a number n, returns the square of n'''
    print(n**2)
square(5)
print(square.__doc__)

#pep-8 document best practice cnsistent maintainle