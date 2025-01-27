//Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>
int main()
{
    int sum=0;
    int x=1;
    while(x<11)
    {
    sum+=x;
    x++;
    }
    printf("the sum of first ten natural numbers is: %d",sum);
    return 0;
}