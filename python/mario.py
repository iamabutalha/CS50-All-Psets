from cs50 import get_int

while True:
   height = get_int("Enter Height ")
   if height > 0:
     break

for i in range(height):
  print("#")
