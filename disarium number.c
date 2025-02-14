//disarium number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,org,rem,digit=0,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    if(n<0) {
        printf("invalid input");
        return 0;
    }
    else {
        while(n!=0) {
            rem=n%10;
            digit+=1;
            n/=10;
        }
        n=org;
        for(int i=digit; i>=1; i--) {
            rem=n%10;
            sum+=(int)pow(rem,i);
            n/=10;
        }
        if(sum==org){
        printf("the number %d is a disarium number",org);
        }
        else{
        printf("the number %d is not a disarium number",org);
        }
    }
    return 0;
}