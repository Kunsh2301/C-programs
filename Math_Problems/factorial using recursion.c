//factorial using recursion
#include<stdio.h>
int factorial(int x);
int factorial(int x) {
int k;
    if(x==1||x==0) {
        return 1;
    }
    else {
    k=x*factorial(x-1);
    return k; 
    }
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("the factorial of the %d is %d ",x,factorial(x));
    return 0;
}