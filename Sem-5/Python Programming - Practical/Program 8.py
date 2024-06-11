# Write a python program to add new data item into list using append() and insert().
# Function to display the current list
def display_list(my_list):
    print("Current List:", my_list)

# Initial list
data_list = [10, 20, 30, 40, 50]
display_list(data_list)

# Using append() to add a new item at the end
new_item_append = 60
data_list.append(new_item_append)
display_list(data_list)

# Using insert() to add a new item at a specific position
new_item_insert = 25
position_to_insert = 2
data_list.insert(position_to_insert, new_item_insert)
display_list(data_list)