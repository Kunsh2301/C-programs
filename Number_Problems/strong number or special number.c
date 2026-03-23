//strong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,org,rem,fact,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    if(n<1) {
        printf("not a strong number");
    }
    else {
        while(n!=0) {
            rem=n%10;
            fact=1;
            for(int i=1; i<=rem; i++) {
                fact*=i;
            }
            sum+=fact;
            n/=10;
        }
        if(org==sum) {
            printf("the number %d is a strong number",org);
        }
        else {
            printf("the number %d is not a strong number",org);
        }
        return 0;
    }
}
