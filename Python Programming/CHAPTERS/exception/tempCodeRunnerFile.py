try:
    num = int(input("Enter no: "))
    if num > 10:
      print(num,"is a positive number")
except:
    print("Number is negative number")
else:
    print("this a else part")
finally:
    print("closing of finally keyword")