//Write a program to check whether a given number is prime or not using while loop.
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
        int i =2;
        while(i<n)
        {
            if(n%i==0)
            {
                isprime=0;
                break;
            }
          i++;  
        }
    }
    if(isprime)
    printf("the number %d is a prime number",n);
    else
    printf("the number %d is not a prime number",n);
    return 0;
}
