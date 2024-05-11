#include<cs50.h>
#include<stdio.h>
int main(int argc, string argv[])// the argv[] is a function in command line argument for the number of strings
{
    if(argc == 6)
    {
        printf("hello %s %s %s %s %s \n", argv[1], argv[2], argv[3],argv[4],argv[5]);
        return 1;
    }
    else
    {
        printf("You are wrong\n");
        return 0;
    }
                  //echo $? in command to check the return value and program is working or not

                  //cowsay -f dragon ooo in command line
}



//printf("Hello , %s %s %s\n", argv[1],argv[2],argv[3]);
