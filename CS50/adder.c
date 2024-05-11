#include <cs50.h>
#include <stdio.h>
int add_two_ints(int x, int y);
int main(void)
{
    int i = get_int("Enter first value ");
    int b = get_int("Enter Second value ");
    int c = add_two_ints(i,b);
    printf("The sum of %i and %i is : %i \n" , i , b , c);
}
int add_two_ints(int x, int y)
{
    int z = x+y;
    return z;
}
