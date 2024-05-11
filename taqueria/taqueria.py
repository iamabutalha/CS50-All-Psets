import sys
menu = {
    "Baja Taco": 4.25,
    "Burrito": 7.50,
    "Bowl": 8.50,
    "Nachos": 11.00,
    "Quesadilla": 8.50,
    "Super Burrito": 8.50,
    "Super Quesadilla": 9.50,
    "Taco": 3.00,
    "Tortilla Salad": 8.00
}
# set total to zero

total_amount = 0

# loop forever
while True:
    try:
        # Get User input
        item = input("Item : ").title()

# Check if the item is already in the Dictionary
        if item in menu:
            # Add the item price to the total
            total_amount = total_amount + menu[item]

            # Print the current total amount
            print("The total amount is : ", end="")
            print("{:.2f}".format(total_amount))
    except EOFError:
        break
