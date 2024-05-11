#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int age;
}
person;
int main(void)
{

person people[2];

for(int i = 0; i < 2; i++)
{


people[i].name = get_string("Enter Your name : \n");
people[i].age = get_int("Enter Your Age : \n");
printf("Your name is %s and age is %i \n ", people[i].name, people[i].age );
}

//printf("Your name is %s and age is %i)

/**people[1].name = get_string("Enter Your name :");
people[1].age = get_int("Enter Your Age :");**/

}
