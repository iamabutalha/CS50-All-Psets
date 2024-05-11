
#include<cs50.h>
#include<stdio.h>

int main(void)
{int i;
    for( i = 100; i >1; i--)
    {
        if(i % 1 == 0|| i % i == 0)
        {
        printf("The prime numbers are %i \n", i);
        }
    }
}
