#include<cs50.h>
#include<stdio.h>
int main(void)
{
   //string s = "HI!";
   //string t = "BYE!";

   string word[2];
   word[0]="HI!";
   word[1]="BYE!";

   //we can also add this when we want to print 1 by 1 char of the string
   // printf("%c%c%c \n", s[0],s[1],s[2]);

    //printf("%s \n", s);
    //printf("%s \n",t);


  //we can also write this to print out every character and then add then put them together below
    printf("%C%C%C \n", word[0][0],word[0][1],word[0][2]);
    printf("%C%C%C \n", word[1][0],word[1][1],word[1][2]);



}
