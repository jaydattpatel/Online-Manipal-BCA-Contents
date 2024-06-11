# Write a python program zto calculate area of rectangle using class and object concepts.
class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def calculate_area(self):
        return self.length * self.width

rect = Rectangle(5, 7)
print("Area of Rectangle:", rect.calculate_area())