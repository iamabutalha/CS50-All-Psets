#include <cs50.h>
#include <stdio.h>
#include <string.h>
typedef struct          //this is syntax for creating own data type
{
    string name;
    string number;
}
person;                 //here we have created our own data type name person which will strore name and number




int main(void)
{
 person people[2];
//We have declared the person 0 as computer start from zero
 people[0].name = "Abu-Talha"; //in people we have created 2 array with person data type
 people[0].number = "03309772275";// now we will store value in that by this .and then the array in person data type .name

 people[1].name = "MudassirHussain";
 people[1].number = "0314907964";

 string naam = get_string("Name : ");

 for(int i = 0; i < 2; i++)
 {
    if(strcmp(people[i].name , naam) == 0) //here 0 mean both are equal or true
    {
        printf("Found %s \n", people[i].number);
        return 0;
    }
 }
 printf("Not Found \n");
return 1;
}
