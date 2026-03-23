//prime number using function with optimized trial division approach
#include<stdio.h>
#include<math.h>
int isprime(int n); //function prototype
int isprime(int n) {  //function defination
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isprime(n))//function call
        printf("the number %d is a prime number",n);
    else
        printf("the number %d is not a prime number",n);
    return 0;
}