#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
   /* char* i = get_string("Enter i : ");
    char* j = get_string("Enter j : ");


    if(strcmp(i ,j) == 0)
    {
        printf("Same \n");

    }
    else
    {
        printf("Different \n");
    }*/

     // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print strings
    printf("%p\n", s);
    printf("%p\n", t);
}

