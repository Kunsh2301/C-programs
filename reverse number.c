//WAP TO REVERSE A NUMBER .
#include<stdio.h>
int main()
{
    int number,rev_number=0,remainder;
    printf("enter a number:");
    scanf("%d",&number);
    while(number!=0)
    {
    remainder=number%10;
    rev_number=rev_number*10+remainder;
    number/=10;
    }
    printf("the reverse number is:%d",rev_number);
    return 0;
}