//automorphic number
#include<stdio.h>

int main()
{
    int n,sqn,org;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    sqn=n*n;
    if(n<0) {
        printf("not a automorphic number");
        return 0;
    }
    while(n!=0) {
        if(n%10 != sqn%10) {
            printf("the number %d is not a automorphic number",org);
            return 0;
        }
        n/=10;
        sqn/=10;
    }
    printf("the number %d is an automorphic number",org);
    return 0;
}