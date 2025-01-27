/*Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.*/
#include<stdio.h>

int main()
{
    float p,r,t;
    printf("enter principle amount:");
    scanf("%f",&p);
    printf("enter rate of interest :");
    scanf("%f",&r);
    printf("enter time in years:");
    scanf("%f",&t);
    printf("the simple interest is =%f", (p*r*t)/100);
    return 0;
}