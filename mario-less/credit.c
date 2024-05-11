#include <stdio.h>
#include <cs50.h>

int get_digit_sum(int number);
string validate_credit_card(long long card_number);

int main(void)
{
    // Get credit card number from the user
    long long card_number;
    do
    {
        card_number = get_long("Number: ");
    } while (card_number <= 0);

    // Validate and identify the card type
    string result = validate_credit_card(card_number);

    // Print the result
    printf("%s\n", result);

    return 0;
}

int get_digit_sum(int number)
{
    // Calculate the sum of the digits of a number
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

string validate_credit_card(long long card_number)
{
    int digit_sum = 0;
    int multiplier = 1;

    // Iterate through the digits of the credit card number
    while (card_number > 0)
    {
        int digit = card_number % 10;

        // Multiply every other digit by 2
        if (multiplier % 2 == 0)
        {
            digit *= 2;
            digit_sum += get_digit_sum(digit);
        }
        else
        {
            digit_sum += digit;
        }

        // Move to the next digit
        card_number /= 10;
        multiplier++;
    }

    // Check if the card number is valid
    if (digit_sum % 10 == 0)
    {
        // Identify the card type based on starting digits
        if ((card_number == 34 || card_number == 37) && multiplier == 15)
        {
            return "AMEX";
        }
        else if ((card_number >= 51 && card_number <= 55) && multiplier == 16)
        {
            return "MASTERCARD";
        }
        else if ((card_number / 10 == 4 || card_number / 1000 == 4) && (multiplier == 13 || multiplier == 16))
        {
            return "VISA";
        }
    }

    // If not valid or card type not identified, return INVALID
    return "INVALID";
}
