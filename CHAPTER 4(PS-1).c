//Write a program to print multiplication table of a given number n.
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
    printf("%d×%d=%d\n",n,i,n*i);
    }
    return 0;
}