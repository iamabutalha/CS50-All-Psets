#include <cs50.h>
#include <stdio.h>


typedef struct
{
    string name;
    int vote;
}
candidate;

candidate get_candidate(string prompt);

int main(void)
{

   // candidate president = get_candidate("Enter Candidate");

   candidate candidate_array[3];
   for(int i = 0; i < 3; i++)
{
    candidate_array[i] = get_candidate("Candidate ");
    
   for(int j = 0; j<1; j++)
   {
     printf("Your name is %s \n", candidate_array[i].name);
    printf("Your votes are %i \n", candidate_array[i].vote);
   }
}



}



candidate get_candidate(string prompt)
{
    printf("%s \n", prompt);

    candidate c;

    c.name = get_string("Enter Your Name \n");
    c.vote = get_int("Enter Your votes \n");

    return c;
}
