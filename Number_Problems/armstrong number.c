//armstrong number 
#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int org=n;
    while(n>0)
    {
    n/=10;
    count+=1;
    }
    n=org;
    while(n>0)
    {
    rem=n%10;
    sum+=pow(rem,count);
    n/=10;
    }
    if(sum==org)
    printf("the number %d is an amstrong number",org);
    else
    printf("the number %d is not a amstrong number",org);
    return 0;
}