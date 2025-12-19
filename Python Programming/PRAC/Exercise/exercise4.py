def sumOfExpenses(expenses):
    return sum(expenses)

def splitExpenses(total, people):
    return total / people

def main():
    print("List of Expenses of Friends:-")
    expenses = [150.24, 124, 78, 77 , 99, 25.4, 90.7, 61]
    print(expenses)
    total = sumOfExpenses(expenses)
    print('Total Expense: ',total)
    people =int(input('Total No. of People Expense splitting between : '))
    share = splitExpenses(total,people)
    print(f"Each individual person has to pay {share} !!")
    
if __name__ == "__main__":
    main()    