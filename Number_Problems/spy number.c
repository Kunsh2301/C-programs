//spy number
#include<stdio.h>

int main()
{
    int n,sumn=0,rem,productn=1;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0) {
        printf("enter a valid number");
    }
    else if(n==0) {
        printf("spy number");
    }
    else {
        while(n!=0) {
            rem=n%10;
            sumn+=rem;
            productn*=rem;
            n/=10;
        }
        if(productn==sumn)
            printf("spy number");
        else
            printf("not a spy number");
    }
    return 0;
}