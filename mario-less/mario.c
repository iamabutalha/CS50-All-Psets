#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Get user input and validate
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Generate and print pyramid
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf("\U000026AB ");
        }

        // Print hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("\U0001F7E1");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}


