//twisted prime
#include<stdio.h>

int main()
{
    int n,rem,org,rev=0,isprime=1,isrevprime=1;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    if(n<2) {
        printf("not a twisted prime");
    }
    else {
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        n=org;
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0) {
                isprime=0;
                break;
            }
        }
        for(int i=2; i<=rev/2; i++)
        {
            if(rev%i==0) {
                isrevprime=0;
                break;
            }
        }
        if(isprime && isrevprime)
        {
            printf("the number %d is a twisted prime",org);
        }
        else
        {
            printf("the number %d is not a twisted prime",org);
        }
    }
    return 0;
}