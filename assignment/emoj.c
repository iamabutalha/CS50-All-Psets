#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    int a = get_int("Enter A Value \n");
    int b = get_int("Enter B value \n");

    if(a > b)
    {
     printf("\U000026AB \n");
    }
   else
     {
         printf("\U0001F7E1 \n");
     }
}
