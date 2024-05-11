#include <stdio.h>
#include <cs50.h>


int main(void)
{
   int height = get_int("Size \n");
   int lenght = get_int("Size length ");

   int above[height];
   int below[lenght];


   for(int i = 0; i < height; i++)
   {
    for(int j = 0; j < lenght; j++)
    {
        if(height == lenght)
        {
            printf("Found");
            return 0;
            }
            else
            {
                printf("Not found");
                return 1;
            }
    }

   }




}
