//Write a recursive function to calculate the sum of first ‘n’ natural numbers
#include<stdio.h>
int sum(int n);
int sum(int n){
if (n<1)
return 0;
else
return sum(n-1)+n;
}
int main()
{
    int n;
    printf("gave the number upto which you want to calculate sum of natural numbers:");
    scanf("%d",&n);
    printf("the sum of natural numbers till %dth term is:%d",n,sum(n));
    return 0;
}