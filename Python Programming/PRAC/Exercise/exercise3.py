def sumOfNumbers(no):
    # sum = 0
    # for i in no:
    #     sum += i
    # return sum 
    '''---Or------'''
    return sum(no)   

def main():
    no = [10,20,30,40,50]
    total = sumOfNumbers(no)
    print(f'The sum of Numbers is: {total}')

if __name__=="__main__":
    main()
    print ("Executed when invoked directly")
else: 
    print ("Executed when imported")
