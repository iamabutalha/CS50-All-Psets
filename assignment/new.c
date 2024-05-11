#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Print a colorful emoji-like pattern with white color
    printf("\033[0;69m"); // Set text color to white
    printf("  *****  \n");
    printf(" *     * \n");
    printf("*  o o  *\n");
    printf("*   ^   *\n");
    printf(" *  _  * \n");
    printf("  *****  \n");

    return 0;
}

