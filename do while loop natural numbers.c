//Write a program to print first ‘n’ natural number using do-while loop.
#include<stdio.h>

int main()
{
    int i=1;
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    do
    {
    printf("\n %d",i);
    i++;
    }
    while(i<=n);
    return 0;
}