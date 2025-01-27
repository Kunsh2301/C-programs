/* Write a C program to calculate area of a rectangle:
a. Using inputs supplied by the user.*/
#include<stdio.h>

int main()
{
    int length,breadth;
    printf("enter length of rectangle\n");
    scanf("%d",&length);
    printf("enter bradth of rectangle\n");
    scanf("%d",&breadth);
    printf("the area of rectangle is %d",length*breadth);
    return 0;
}