
import sys
names = ["Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"]

# Ask for name
name = input("Name: ")

# Search for name
for n in names:
    if name == n:
        print("Found")
        sys.exit(0)

print("Not found")
sys.exit(1)
