//WAP TO CHECK WEATHER A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>
int main()
{
    int number, original,rev_number=0,remainder;
    printf("enter a number:");
    scanf("%d",&number);
    original=number;
    if(number<0)
    {
    printf("negative number are not palindrome");
    }
    else
    {
    while(number!=0)
    {
    remainder=number%10;
    rev_number=rev_number*10+remainder;
    number/=10;
    }
    if(original==rev_number)
    printf("number is palindrome");
    else
    printf("the number is not a palindrome");
    }
    return 0;
}