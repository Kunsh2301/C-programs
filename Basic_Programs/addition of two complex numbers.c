//WAP TO TO ADD TWO COMPLEX NUMBERS
#include<stdio.h>

int main()
{
    float r1,r2,i1,i2,sumr,sumi;
    printf("enter the real and imaginery part of first complex number:");
    scanf("%f%f",&r1,&i1);
    printf("enter the real and imaginery part of second complex number:");
    scanf("%f%f",&r2,&i2);
    sumr=r1+r2;
    sumi=i1+i2;
    printf("the sum of the two complex number is:%0.2f+i%0.2f",sumr,sumi);
    
    return 0;
}