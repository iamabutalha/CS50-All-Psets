#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int eng,ict,fp;
    eng = get_int("Enter Your marks in Eng \n");
    ict = get_int("Enter Your marks in ICT \n");
    fp= get_int("Enter Your marks in Programming Fundamental \n");

    int result = eng+ict+fp;
   float percentage = ((float)result / 300) * 100;

    if(percentage >= 85)
    {
        printf("Congrats You Got A Grade %f \n", percentage);
    }
   else if(percentage >= 75)
    {
        printf("Congrats You Got B Grade %f\n", percentage);
    }
    else if(percentage >= 60)
    {
        printf("Congrats You Got C Grade %f\n", percentage);
    }
    else
    {
        printf("OOps Fails ,%f \n", percentage);
    }
}
