#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

#include <cs50.h>
#include <stdio.h>

#define BITS_IN_BYTE 8

// Function declaration
void print_bulb(int bit);

int main(void)
{
    // Array to store the binary representation of each character
    int binary[BITS_IN_BYTE];

    // Get a message from the user
    string message = get_string("Enter a message: ");
    int length = strlen(message);

    // Loop through each character in the message
    for (int i = 0; i < length; i++)
    {
        // Convert the character to its ASCII value (a number that represents the character)
        int decimal_value = message[i];

        // Convert the decimal value to binary and store it in the 'binary' array
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            binary[j] = decimal_value % 2;
            decimal_value /= 2;
        }

        // Print the binary representation using the print_bulb function
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            print_bulb(binary[j]);
        }

        // Print a newline after printing the binary representation of a character
        printf("\n");
    }

    return 0; // Added to indicate successful execution
}

// Function to print a "bulb" emoji based on the bit value (0 or 1)
void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Print a dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Print a light emoji
        printf("\U0001F7E1");
    }
}

