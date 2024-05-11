from cs50 import get_int

# TODO

# prompt user for input
while True:
    try:
        card = get_int("Card : ")
        if card > 0:
            break


def luhn_checksum(card):
    def digits_of(n):
        return [int(d) for d in str(n)]
    digits = digits_of(card)
    odd_digits = digits[-1::-2]
    even_digits = digiits[-2::-2]
    checksum = 0
    checksum += sum(odd_digits)
    for d in odd_digits:
        checksum += (digits_of(d*2))
    return checksum % 10


length = 0
amex = card
visa = card
master = card

length = len(str(card))


while visa >= 10:
    visa = int(visa/10)

while amex >= 10**13:
    amex = int(amex / 10**13)

while master >= 10**14:
    master = int(master/10**14)


if luhn_checksum(card) == 0:
    if visa == 4 and (length == 13 or length == 16):
        print("Visa")

    elif length == 15 and (amex == 34 or amex == 37):
        print("Amex")
    elif length == 16 and (<= 51 master <= 55 ):
        print("Master")
    else:
        print("Invalid card ")
else:
    print("Invalid")
