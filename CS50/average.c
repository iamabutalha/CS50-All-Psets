#include<cs50.h>
#include<stdio.h>
int N = 3;
float average(int array[]);
int main(void)
{
    int score[3];
     for(int i = 0; i < 3 ; i++)
     {
                score[i]= get_int(" Score \n");
     }
    printf("Average is %f \n" , average(score) );
}

float average(int array[])
{
   int sum = 0;
   for(int i = 0; i<N; i++)
   {
    sum += array[i];
   }
   return sum/ (float)N;

}
