//Write a program to find greatest of four numbers entered by the user.
#include<stdio.h>

int main()
{
    int a,b,c,d,greatest;
    printf("enter four numbers number\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    greatest=a;
    if (b > greatest) 
    {
        greatest = b;
    }
    if (c > greatest) 
    {
        greatest = c;
    }
    if (d > greatest) 
    {
        greatest = d;
    }
    printf("the greatest number is %d", greatest);
    return 0;
}
// in nested if all if condition are checked even if first if condition is true
