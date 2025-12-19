
'''Decorators are the functions takes arguments as another function which helps to change and return other functions'''
# simply, a function which takes another function, updates it and then return it. 

'''example-1'''

# def greet(fx):
#    def mfx():  
#      print("Good Morning")
#      fx()
#      print("Good Night")
#    return mfx

# @greet
# def hello():
#   print('hello Dipesh')

# hello()  

'''example - 2'''

def greet(fx):
  def modifiedFX():
    print('Good Morning')
    fx()
    print('bbye')
  return modifiedFX

def welcome(fx):
  def modifiedFX():
    print('This is Just a Introduction')
    fx()
    print('Thank You')
  return modifiedFX


@greet
@welcome
def hello():
  print('Hello I am Dipesh')

hello()  
  


