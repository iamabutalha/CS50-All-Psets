#include<cs50.h>
#include<stdio.h>

int main(void)
{
int x = get_int("Enter X value \n");
int y = get_int("Enter Y Value \n");

if(x<y)
{
    printf("X is less than Y \n");
}
else if(x>y)
{
printf("X is greater then Y \n" );
}
else
{
    printf("X is equal to Y \n");

}
}
