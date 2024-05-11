#include <cs50.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Improper Usage \n" );
        return 1;
    }

    //Open A file

    string filename = argv[1];
    FILE *file = fopen(filename, "r");

    if(file ==  NULL)
    {
       printf("No Such File Found");
        return 1;
    }

    uint8_t buffer[4];

    fread(buffer , 1 , 4 , file);
    for(int i = 0 ; i < 4 ; i++)
    {
        printf("%i \n", buffer[i]);
    }




    }





