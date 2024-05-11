#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter The number \n");

    switch (x)
    {

        case 1:
            printf("One ! \n");
            //break;  Here if we remove the break it wil show all the number at once
        case 2:
            printf("Two ! \n");
            //break;
        case 3: // Use a colon instead of a semicolon here
            printf("Three ! \n");
            //break;
        default: // Use a colon instead of a semicolon here, and correct the capitalization of Printf to printf
            printf("Sorry \n");
    }

    return 0; // Add a return statement to indicate successful execution
}
