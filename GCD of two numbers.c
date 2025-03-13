//gcd between two number
#include<stdio.h>
int gcd(int a,int b) {
    int result=((a<b)?a:b);
    while(result>0) {
        if(a%result==0 && b%result==0) {
            break;
        }
        result--;
    }
    return result;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}