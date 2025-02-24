#include<stdio.h>

int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
    printf("character is in lower case");
    else
    printf("character is not in lower case");
    return 0;
}
