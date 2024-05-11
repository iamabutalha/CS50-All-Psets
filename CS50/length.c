#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
    string name = get_string(" Enter Your Name ");
    //the strlen is string.h library used for the length of the string
    int n = strlen(name);
    printf("%i \n", n);





   //int n = 0;
   //while(name[n] != '\0')
  // {
   // n++;
   //}
   //printf("%i \n", n);
}
