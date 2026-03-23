//harshad or niven number
#include<stdio.h>

int main()
{
    int n,org,sum=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    if(n<=0) {
        printf("invalid input enter a positive integer");
    }
    else {
        while(n!=0) {
        rem=n%10;
        sum+=rem;
        n/=10;
        }
        if(org%sum==0){
        printf("the number %d is a niven number",org);
        }
        else{
        printf("the number %d is not a niven number",org);
        }
    }
    return 0;
}