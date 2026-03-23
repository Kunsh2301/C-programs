/*perfect number
A perfect number is a positive integer that is equal to the sum of its
proper divisors, excluding itself*/
#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("enter a number :");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("negative numbers and zero are not perfect numbers");
    }
    else
    {
        for(int i=1; i<num; i++)
        {
            if(num%i==0)
            {
                sum+=i;
            }
        }
        if(num==sum)
        {
            printf("the number %d is a perfect number",num);
        }
        else
        {
            printf("the number %d not a perfect number",num);
        }
    }
    return 0;
}