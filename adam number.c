//adam number
#include<stdio.h>

int main()
{
    int n,org,sqn,revn=0,rem,revnsq,revnsqrev=0;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    sqn=n*n;
    while(n!=0)
    {
        rem=n%10;
        revn=10*revn+rem;
        n/=10;
    }
    revnsq=revn*revn;
    while(revnsq!=0)
    {
        rem=revnsq%10;
        revnsqrev=10*revnsqrev+rem;
        revnsq/=10;
    }
    if(sqn==revnsqrev)
    {
        printf("the number %d is a adam number",org);
    }
    else
    {
        printf("the number %d is not a adam number",org);
    }
    return 0;
}