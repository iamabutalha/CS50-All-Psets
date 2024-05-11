#include<cs50.h>
#include<stdio.h>

int main(void)
{
char c = get_char("Do You Agree? : ");
//We have us the sign || for or mean if c=y or c=Y both conditions are okay.
if (c == 'y'|| c == 'Y')
{
    printf("agreed .\n");
}

else if(c == 'n' || c == 'N')
{
    printf("Not agreed .\n");
}
else
{
    printf("Enter Y for Yes and N for No \n");
}

}
