#include <cs50.h>
#include <stdio.h>
#include <string.h>
int factorial(int number);
int main(void)
{
    int n = get_int("Enter a Number: ");
    printf("%i \n", factorial(n));
}
int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }
    return number * factorial(number - 1);
    //here we have done recursion which help to solve the problem by breaking it smaller and smaller
}   //we can do this by loop but loop does't give us that levrage here
