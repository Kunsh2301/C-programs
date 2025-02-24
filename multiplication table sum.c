//Write a program to calculate the sum of the numbers occurring in the 
//multiplication table of 8. (consider 8 x 1 to 8 x 10).
#include<stdio.h>

int main()
{
    int sum=0;
    int i;
    for(i=1;i<11;i++)
    {
    int x=8*i;
    sum+=x;
    }
    printf("the sum of number occurring in multiplication table of 8 is:%d",sum);
    return 0;
}
