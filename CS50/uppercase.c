#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    string s = get_string("Enter Your Name \n");
    printf("AFTER \n");
    for(int i = 0; i < strlen(s) ; i++)
    {
        if(islower(s[i]))      //we use this islower it is alreday creted library for converting to uppercase
        {
        printf("%c", toupper(s[i]));
       
        }

    }
 printf("\n");




   // {
       // if(s[i] >= 'a' && s[i] <= 'z')
       // {
         //   printf("%c", s[i]-32);
        //}
       // else
        //{
           // printf("%c", s[i]);
        //}

    //}
   // printf("\n");
}
