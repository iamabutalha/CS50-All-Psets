#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    string word1 = get_string("Enter a word : /n");
    string word2 = get_string("enter second word : /n");

    int a = strlen(word1);
    int b = strlen(word2);

    if(isupper(word1[a]))
    {
        printf("Lower case %s", islower(word1))
    }
}
