//Write a program to sum first ten natural numbers using do while loop.
#include<stdio.h>

int main()
{
    int sum=0;
    int x=1;
    do
    {
    sum+=x;
    x++;
    }
    while(x<11);
    printf("the sum of first ten natural number is:%d",sum);
    return 0;
}