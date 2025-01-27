//Write a program to check whether a number is divisible by 97 or not.
#include<stdio.h>

int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d",&number);
    printf("the remainder of %d with 97 is %d",number,number%97);
    return 0;
}