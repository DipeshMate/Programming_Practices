'''-------snake water Gun---------'''
'''nake, Water and Gun is a variation of the children's game "rock-paper-scissors" where players use hand gestures to represent a snake, water, or a gun. 
The gun beats the snake, the water beats the gun, and the snake beats the water. Write a python program to create a Snake Water Gun game in Python using if-else statements. 
Do not create any fancy GUI. Use proper functions to check for win.'''


import random as r

def checking(player,computer):
    if player==computer:
       return 0
    elif player==0 and computer==2:
        return -1
    elif player==1 and computer==0:
       return -1
    elif player==2 and computer==1:
        return -1
    else:
        return 1
         
computer = r.randint(0,2)
player = int(input("Choose any one:- \n0 for Snake \n1 for Water \n2 for Gun \nPlease Enter: "))
score  = checking(player,computer)
print('Computer choose:- ',computer)
print('You have choosen:- ',player)

if score == 0:
   print('Match Draw') 
elif score == 1:
   print('You win') 
else:
    print('You lose') 
    



