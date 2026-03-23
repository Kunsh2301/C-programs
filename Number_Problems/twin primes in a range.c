//twin prime in a range
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n) {
    if(n<=1) return false;
    for(int i=2; i<=(int)sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int a,b;
    printf("enter the lower and upper bound of range:");
    scanf("%d %d",&a,&b);
    printf("all twin prime in range are:\n");
    int found=0;
    for(int i=a; i<=b; i++) {
        if(prime(i)&&prime(i+2)) {
            printf("%d,%d\n",i,i+2);
            found =1;
        }
    }
    if(!found)
    printf("no twin prime in the gaven range");
    return 0;
}