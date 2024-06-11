# Write a python program to implement exception handling for ZeroDivision and ValueError.
try:
    num = int(input("Enter a number: "))
    result = 10 / num
    print("Result:", result)
except ZeroDivisionError:
    print("Cannot divide by zero!")
except ValueError:
    print("Invalid input. Please enter a number.")