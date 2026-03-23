//Write a program to sum first ten natural numbers using for loop.
#include<stdio.h>

int main()
{
    int sum=0;
    int x;
    for(x=1;x<11;x++)
    {
    sum+=x;
    }
    printf("the sum of first ten natural number is: %d",sum);
    return 0;
}