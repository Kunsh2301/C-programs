//WAP TO SUM OF FIBONACCI NUMBERS AT EVEN INDEXES UPTO N TERMS.
#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,sum=0,fib;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for(int i =0; i<n; i++)
    {
        if(i==0)
        {
            fib=0;
        }
        else if(i==1)
        {
            fib=1;
        }
        else
        {
            fib=f1+f2;
            f1=f2;
            f2=fib;
        }
        if(i%2==0)
        {
            sum+=fib;
        }

    }
    printf("sum of the Fibonacci series at even indexes upto %d is:%d",n,sum);
    return 0;
}