import sys

if len(sys.argv) != 2:
    print("Missing command Line argument")
    sys.exit(0)


print(f"Hello {sys.argv[1]}")
sys.exit(1)
