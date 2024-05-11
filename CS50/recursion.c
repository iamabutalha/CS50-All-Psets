#include <cs50.h>
#include <stdio.h>
void draw(int n);
int main(void)
{
    int height = get_int("Height ");

    draw(height);

}
void draw(int n)
{
    //we wrote this statment because to avoid infinite loop mean if the n become zero it will stop printing that thing
    if(n <= 0)
    {
        return;
    }
//This is called recursion this me we write a function again and again to solve the problem
    draw(n - 1);

    for(int i = 0 ; i < n; i++)
    {
        printf("#");

    }
printf("\n");
}
