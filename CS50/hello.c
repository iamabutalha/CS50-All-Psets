#include<cs50.h>
#include<stdio.h>

int main(void)

{
    string first = get_string("Whats Your First Name \n");
    string last = get_string("Whats Your last name \n");
    printf("hello, %s %s \n", first,last);

}
