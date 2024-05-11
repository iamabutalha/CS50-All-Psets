from cs50 import get_string

people = {
    "Abutalha":"03309772275",
    "Khan":"03149807964"
}

name = get_string("Enter name : ")
#here it will show the value of the key as the names are the key and the numbers are there values

if name in people:
    print(f"Number : {people[name]}")
else:
    print("Not Found")


