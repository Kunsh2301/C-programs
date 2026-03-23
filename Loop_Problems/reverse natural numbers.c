//Write a program to print ‘n’ natural numbers in reverse order using for loop.
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(n;n>0;n--)
    printf("%d \n",n);
    
    return 0;
}