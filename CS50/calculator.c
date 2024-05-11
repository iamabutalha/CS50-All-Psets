#include<cs50.h>
#include<stdio.h>

int main(void)
{


    long x = get_long("Enter X \n");
    long y = get_long("Enter Y \n");

  //THis mean we want to convert long to float we will use the syntax below

    //float z = (float) x / (float) y;

    //we use double like long it give us and store more value and sum up more values

     double z = (double) x / (double) y;


    printf("Your answer is %.20f \n" , z);

    //here the .20 is to show me the repeating number with 20 points
}
