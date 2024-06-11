# Write a python program to find largest number among three numbers.
# Python program to find the largest number among the three input numbers

# change the values of num1, num2 and num3
# for a different result
num1 = int(input("Enter first number"))
num2 = int(input("Enter second number"))
num3 = int(input("Enter third number"))

if (num1 >= num2) and (num1 >= num3):
   largest = num1
elif (num2 >= num1) and (num2 >= num3):
   largest = num2
else:
   largest = num3

print("The largest number is", largest)