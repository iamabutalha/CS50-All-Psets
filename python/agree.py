from cs50 import get_string

agree = get_string("Are you agree : ")

if agree.lower() in ["y","yes"]:
 print("agree")
elif agree.lower() in ["n", "no"]:
   print("Not agree")


