#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int a;
    int b;
    do {
     a= get_int(" Enter the value of a \n");
    }
    while(a<0);

   do
   {
    b= get_int(" Enter the value of b \n");
   }
   while(b<0);

   int c = a+b;
    printf("the answer of %i and %i is %i \n " ,a , b, c);

   }
