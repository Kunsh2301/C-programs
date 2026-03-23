//twin prime
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n) {
    if(n<=1) return false;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int a,b;
    printf("enter two numbers a and b:");
    scanf("%d %d",&a,&b);
    if(prime(a)&&prime(b)&& abs(a-b)==2)
    printf("the number %d and %d are twin primes",a,b);
    else
    printf("the number %d and %d are not twin primes",a,b);
    return 0;
}