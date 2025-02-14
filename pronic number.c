//pronic number
#include<stdio.h>

int main()
{
    int n,pronic=0;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0) {
        printf("negative number are not pronic number");
    }
    else {
        for(int i=0; i<=n/2; i++) {
            if(i*(i+1)==n) {
                pronic=1;
                break;
            }
        }
        if(pronic)
        printf("the number %d is a pronic number",n);
        else
        printf("the number %d is not a pronic number",n);
    }
    return 0;
}