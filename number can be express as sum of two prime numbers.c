//Check Whether a Number can be Express as Sum of Two Prime Numbers
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int x);
bool prime(int x) {
    if(x<=1) return false;
    for(int i=2; i<=sqrt(x); i++) {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    bool found=false;
    for(int i=2; i<=n/2; i++) {
        if(prime(i)&&prime(n-i)) {
            printf("%d+%d=%d\n",i,n-i,n);
            found=true;
        }
    }
    if(!found)
    printf("the number %d cannot be express as sum of two prime numbers",n);
    return 0;
}