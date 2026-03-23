//Write a program to check whether a given number is prime or not using do while loop.
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int isprime=1;
    if(n<=1)
    {
        isprime=0;
    }
    else
    {
        int i=2;
        do
        {
            if(n%i==0 && n!=2)
            {
                isprime=0;
                break;
            }
        i++;    
        }
        while(i<n);
    }
    if(isprime)
        printf("the number %d is a prime number",n);
    else
        printf("the number %d is not a prime number",n);
    return 0;
}