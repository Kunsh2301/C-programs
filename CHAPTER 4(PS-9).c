//Write a program to calculate the factorial of a given number using while loop.
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int factorial=1;
    int i=n;
    while(i>=1)
    {
    factorial*=i;
    i--;}
    printf("the factorial of the given number is:%d",factorial);
    return 0;
}