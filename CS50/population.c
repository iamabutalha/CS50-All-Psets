#include<cs50.h>
#include<stdio.h>
int main (void)
{
    //Prompting User for data it mean how much lamas we have
    int start;
    do
    {
        start = get_int("You have \n");

    }
    while(start<9);

    //prompting for a goal lamas and it will be greater than the start
    int end;
    do
    {
        end = get_int("Goal Size \n");
    }
    while(end<start);

    // How many year will it take to get to the goal?
    //mean how much tiome will it take in year to reach your goal number
    int year=0;
    while(start<end)
    {
        start +=(start/3)-(start/4); //+= start + x number .
        year++;
    }
    printf("Years to reach  : %i \n" , year);
}

