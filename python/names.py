import sys

names = ["Bill", "Charlie","Potter","Gates","Talha"]

name = input("Enter name : ")

if name in names:
    print("FOund")
    sys.exit(0)

print("Not found")
sys.exit(1)


