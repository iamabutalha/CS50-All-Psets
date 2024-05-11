#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int c;
   // do
   // {
    c = get_int("Are You ready ");
    //}
  //  while(c < 0);

    if(c > 0 && c < 20)

    {
        printf("Okay Let Go You are Ready \n");
    }
    else if(c < 0)
    {
        printf("Get ready Man Asap \n");
    }
    else
    {
        printf("OOps Wrong Number ");
    }
}
