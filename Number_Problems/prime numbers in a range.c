//WAP TO PRINT PRIME NUMBERS COMING IN A RANGE.
#include<stdio.h>

int main()
{
    int x,y;
    printf("enter the lower bound of range:");
    scanf("%d",&x);
    printf("enter the upper bound of range:");
    scanf("%d",&y);
    printf("the prime number between %d and %d are:\n",x,y);
    for(int num=x; num<=y; num++)
    {
        if(num<2)
            continue;
        int prime=1;
        for(int i=2; i<num; i++)
        {
            if(num%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
            printf("%d \n",num);
    }
    return 0;
}