#include<cs50.h>
#include<stdio.h>
int main(void)
{
    //get data from user and declare varibles
    string name = get_string("What's Your Name \n");
    int age = get_int("Whats Your Age \n");
    string number = get_string("What's Your Number \n");
    //Print all the data
    printf( "Your Name is  %s. Your age is %i. Your number is %s. \n", name , age , number );
}
