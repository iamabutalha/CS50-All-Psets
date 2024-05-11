#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);
int number = 0;
int main(void)
{
   
    string input = get_string("Enter a positive integer: ");

    for (int i = 0,  n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    int count = strlen(input);
    int temprary_int = 0;

    // recursive Base Case

    if(count == 0)
    {
        return number;
    }

    for(int i = count - 1; i >= 0; i--)
    {
        temprary_int = input[i] - '0';
        input[i] = '\0';

        convert(input);

        number = number * 10 + temprary_int;
        return number;
    }
    return number;
}
