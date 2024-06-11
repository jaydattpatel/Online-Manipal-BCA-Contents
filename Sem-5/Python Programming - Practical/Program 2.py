# Write a program to create a function to calculate factorial of a number.
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)

num = int(input("Enter a number: "))
print("Factorial:", factorial(num))