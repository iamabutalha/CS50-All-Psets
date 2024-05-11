#include<cs50.h>
#include<stdio.h>
//void print_grid(int size);
//int get_size(void);
int main(void)
\

{

int n;
// if the do is entered
do
{
    n = get_int("Enter size ");
    //but the while dosent match it will again take user to the do and will be in the loop until the while become ture
}
   while(n<1);

//A "For" Loop is used to repeat a specific block of code a known number of times.
for (int i=0; i<n; i++)
{
  for (int j=0; j<n; j++)
  {
    printf("#");

  }
   printf("\n");
}

}




































































//{

// Get Size of grid here we says that when ever n value is given store it in n variable and then apply the function on it
//int n = get_size();

//Print grid of bricks
//print_grid(n);

//}


//This function has been created by me
//int get_size(void)
//{
  //  int n;
    //do
    //{
    //n = get_int("Enter the Size ");
    //}
    //while(n<1);
    //return n;
//}




//This function is also created by me.
// I can use this function where i need it
  // void print_grid(int size)
//{

 //for(int i = 0; i < size; i++)
   //{
    //for(int j = 0 ; j < size; j++)
   //{
    //printf("#");
   //}
   //printf("\n");
   //}
//}




