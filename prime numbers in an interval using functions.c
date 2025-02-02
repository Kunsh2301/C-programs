// prime numbers in an interval using functions
#include<stdio.h>
void primenumbers(int lower,int upper); // function prototype
void primenumbers(int lower,int upper) {
    for(int i=lower; i<=upper; i++)
    {
    int isprime=1;
        if(i<2)
            continue;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime)
            printf("%d\n",i);
    }
}
int main() {
    int lower,upper;
    printf("enter the lower bound of the range:\n");
    scanf("%d",&lower);
    printf("enter the upper bound of the range:\n");
    scanf("%d",&upper);
    printf("the  prime number in the gaven range are :\n");
    primenumbers(lower,upper);

    return 0;
}