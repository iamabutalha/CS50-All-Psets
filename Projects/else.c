#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string name = get_string(" Name \n");
    int length = strlen(name);

    if(length > 7 )
    {
        printf("Exceeded \n");
    }
    else
    {
        printf("Correct \n");
    }
}
