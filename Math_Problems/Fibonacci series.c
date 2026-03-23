//write a program to print Fibonacci series
#include<stdio.h>

int main()
{
    int n;
    int t1=0,t2=1,nextterm;
    printf("enter a number till which you want to print the series:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("enter a valid number");
    }
    else
    {
        printf("Fibonacci series:");
        for(int i=1; i<=n; i++)
        {
            printf("%d",t1);
            nextterm=t1+t2;
            t1=t2;
            t2=nextterm;
        }
    }
    return 0;
}