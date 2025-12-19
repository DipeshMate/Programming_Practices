import random

target = random.randint(1, 100)
print(target)
print("Welcome to the number guessing game!")
print("I have selected a number between 1 and 100.")
print("Try to guess it in as few attempts as possible.")
print("You can type 'exit' to quit the game at any time.")
print("Good luck!")
attempts = 0
while True:
    guess = input("Enter your guess: ")
    if guess.lower() == 'exit':
        print("Thanks for playing!")
        break
    try:
        guess = int(guess)
    except ValueError:
        print("Please enter a valid number.")
        continue

    attempts += 1
    if guess < target:
        print("Too low! Try again.")
    elif guess > target:
        print("Too high! Try again.")
    else:
        print(f"Congratulations! You've guessed the number {target} in {attempts} attempts.")
        break
# The code implements a simple number guessing game where the user has to guess a randomly selected number between 1 and 100.
# The user is prompted to enter their guess, and the program provides feedback on whether the guess is too low, too high, or correct.
# The user can exit the game at any time by typing 'exit'. The program keeps track of the number of attempts made by the user.
# The game continues until the user guesses the correct number or chooses to exit.
# The code handles invalid inputs gracefully by prompting the user to enter a valid number if the input is not an integer.
# The game is designed to be user-friendly and encourages the user to keep trying until they guess the correct number or decide to quit.

