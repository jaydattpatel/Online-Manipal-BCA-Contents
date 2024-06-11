# Write a python program for creating user defined exception and raise it when input number is negative.
class NegativeNumberError(Exception):
    def __init__(self, message="Input number cannot be negative."):
        self.message = message
        super().__init__(self.message)

def check_positive_number(number):
    if number < 0:
        raise NegativeNumberError()
    else:
        print(f"The input number {number} is positive.")

def main():
    try:
        # Taking input from the user
        user_input = float(input("Enter a number: "))
        
        # Checking if the input is positive
        check_positive_number(user_input)
    except NegativeNumberError as ne:
        print(f"Error: {ne}")
    except ValueError:
        print("Error: Please enter a valid number.")
    else:
        print("No exception occurred.")

if __name__ == "__main__":
    main()