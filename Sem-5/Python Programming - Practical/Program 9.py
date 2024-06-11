# Write a python program to add and delete key-value pairs in dictionary in different ways.
# Function to display the current dictionary
def display_dict(my_dict):
    print("Current Dictionary:", my_dict)

# Initial dictionary
my_dictionary = {'name': 'John', 'age': 25, 'city': 'New York'}
display_dict(my_dictionary)

# Adding key-value pairs using assignment
my_dictionary['occupation'] = 'Engineer'
display_dict(my_dictionary)

# Adding key-value pairs using update() method
new_data = {'salary': 60000, 'hobbies': ['reading', 'coding']}
my_dictionary.update(new_data)
display_dict(my_dictionary)

# Deleting a key-value pair using del keyword
if 'age' in my_dictionary:
    del my_dictionary['age']
display_dict(my_dictionary)

# Deleting a key-value pair using pop() method
removed_value = my_dictionary.pop('hobbies', None)  # None is the default value if key is not found
print(f"Removed Value: {removed_value}")
display_dict(my_dictionary)

# Deleting the last item using popitem() method
removed_item = my_dictionary.popitem()
print(f"Removed Item: {removed_item}")
display_dict(my_dictionary)