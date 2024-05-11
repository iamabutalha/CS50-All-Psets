#include <stdio.h>
#include <cs50.h>
int main(void)
{
   /** string s = "HI";
    printf("%p \n", s);
    printf("%p \n", &s[0]);
    printf("%p \n", &s[1]);
    printf("%p \n", &s[2]);
    printf("%p \n", &s[3]); */

    //string s = "HI";
  //  printf("%s \n", s);


//the concept of string exist in c but not string keyword
//so in the below thats why we had written %s as a place holder and
//the compiler will add all the word till the null character.
  //  char *s = "HI";   this mean string in c
    //printf("%s \n", s);


/**char *s ="HI";
printf("%c \n", s[0]);
printf("%c \n", s[1]);
printf("%c \n", s[2000000]); //here is a segmentation fault.*/

 char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));


}
