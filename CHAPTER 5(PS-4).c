//Write a program using recursion to calculate nth element of Fibonacci series
#include<stdio.h>
int Fibonacci(int n);
int Fibonacci(int n) {

    if(n<=0)
        return 0;
    else if(n==1)
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);

}
int main()
{
    int n;
    printf("enter the element you want to calculate of Fibonacci series:");
    scanf("%d",&n);
    printf("the %d'th element of the Fibonacci series is:%d",n,Fibonacci(n));
    return 0;
}