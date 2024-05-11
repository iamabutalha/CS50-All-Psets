from cs50 import get_int

# TODO

# prompt user for input
while True:
    card = get_int("Card: ")

    if card > 0:
        break




def luhn_checksum(card):
    def digits_of(n):
        return [int(d) for d in str(n)]
    digits = digits_of(card)
    even_digits = digits[-2::-2]
    odd_digits = digits[-1::-2]
    checksum = digits[-1]
    for d in even_digits:
        checksum += sum(digits_of(d*2))
    return checksum % 10


length = len(str(card))


if luhn_checksum(card) == 0:
    if length == 13 or length == 16:
        if str(card)[0] == '4':
            print("Visa")
        elif str(card)[0:2] == '51' or str(card)[0:2] == '52' or str(card)[0:2] == '53' or str(card)[0:2] == '54' or str(card)[0:2] == '55':
            print("Master")
    elif length == 15:
        if str(card)[0:2] == '34' or str(card)[0:2] == '37':
            print("Amex")
    else:
        print("Invalid card")
else:
    print("Invalid")
