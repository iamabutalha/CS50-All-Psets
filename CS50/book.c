#include <stdio.h>
#include <cs50.h>
#include<string.h>
int main(void)
{
/**In your program, you are working with a file.
* Think of a file like a notebook where you want to write down names and numbers.
* The first part of your program is like opening that notebook and getting ready to write */
    FILE *file = fopen("book.csv", "a");
 string name = get_string("Enter Name ");
 string number = get_string("Enter number" );

fprintf(file, "%s,%s\n", name, number);
fclose(file);
}
