//WAP TO CHECK WEATHER A NUMBER IS A NEON NUMBER OR NOT.
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int square=n*n;
    int x=square;
    int digit;
    while(x!=0)
    {
    digit=x%10;
    sum=sum+digit;
    x/=10;
    }
    if(sum==n)
    printf("the number is neon number");
    else 
    printf("the number is not a neon number");
    return 0;
}