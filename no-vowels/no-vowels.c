// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
string replace(string input);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("no-vowels word \n");
        return 1;
    }

    printf("%s \n", replace(argv[1]));
}

string replace(string input)
{
    for(int i = 0; i < strlen(input); i++)
    {
        switch(input[i])
        {
            case 'a':
            input[i] = 54;  //54 is 6 assci
            break;

            case 'e':
            input[i] = 51;   //51 is three ascii
            break;

            case 'i':
            input[i] = 49;
            break;

            case 'o':
            input[i] = 48;
            break;
        }

    }
      return input;
}

