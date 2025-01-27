//Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main()
{
    int n;
    int factorial=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
    factorial*=i;
    }
    printf("the factorial of the given number is:%d", factorial);
    return 0;
}