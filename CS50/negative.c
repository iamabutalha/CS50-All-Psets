#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int n;
    do
    {
         n = get_int(" Enter Negative Number ");
    }
    while(n<0);

    printf("The Negative number is %i \n", n);
}
