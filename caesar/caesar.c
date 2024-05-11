#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digit(string text);
char rotate(char p , int k);

int main(int argc, string argv[])
{
    int k, length;

    if(argc != 2 || !only_digit(argv[1]))

    {
        printf("Usage : ./caesar \n");
         return 1;
    }

k = atoi(argv[1]);
string plain_text = get_string("Plain_text : ");
length = strlen(plain_text);
char cipher_text[length + 1];

for(int i = 0 ; i < length; i++)
{
    cipher_text[i] = rotate(plain_text[i],k);
}
cipher_text[length] = '\0';
printf("%s \n", cipher_text);
return 0;


}
bool only_digit(string text)
{
    int length;
    length = strlen(text);
    for(int i = 0; i < length; i++)
    {
        if(!isdigit(text[i]))
        return false;
    }
    return true;
}
char rotate(char p , int k)
{
    char pi,c,ci;

    if(isupper(p))
    {
        pi = p-65;
        ci = (pi+k)%26;
        c = ci + 65;
    }
    else if(islower(p))
    {
         pi = p-97;
        ci = (pi+k)%26;
        c = ci + 97;
    }
    else
    {
        return p;
    }
    return c;
}
