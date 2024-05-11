#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int number = get_int("Enter a number : ");
    int sum = 0;
    for(int n = 0; n < number; n+=2)
    {
         sum = sum + n;
        printf("%i \n", n);
    }
    printf("The sum is = %i \n", sum);



}

