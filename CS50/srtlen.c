#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
    string address;
}
person;

int main(void)
{

person people[2];

people[0].name = "Abutalha";
people[0].number= "03309772275";
people[0].address ="Palosi Madhdarzi";


people[1].name = "Khan";
people[1].number ="03149807964";
people[1].address = "Peshawar Pakistan";



string put_name = get_string("Enter Name : ");

for(int i = 0; i < 2; i++)
{
    if(strcmp(people[i].name , put_name)== 0)
    {
        printf("Found Number is %s . Adress is %s \n", people[i].number, people[i].address);
        return 0;
    }

}
printf("Not Found");
    return 1;

}
