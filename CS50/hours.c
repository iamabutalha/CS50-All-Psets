#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hour(int hours[], int week, char output);

int main(void)
{
    int week = get_int("Enter Numbers of weeks You taking CS50 : ");
    int hour[week];

    for (int i = 0; i < week; i++)
    {
        hour[i] = get_int("Enter Week %i Hours : ", i);
    }
    char output;
    printf("Enter T for total and A for average : ");
    do
    {
        output = toupper (getchar());
    } while (output != 'A' && output != 'T');

    printf("%1.f hours \n", calc_hour(hour, week , output));

    return 0;
}

float calc_hour(int hours[], int week, char output)

{
    int total_hours = 0;

    for (int i = 0; i < week; i++)
    {
        if (output == 'T' )
        {
            total_hours += hours[i];
        }
          if (output == 'A')
    {
        total_hours = hours[i] / week;
    }


    }
 return total_hours;



}
