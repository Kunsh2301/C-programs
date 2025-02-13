//buzz number
#include<stdio.h>

int main()
{
    int n,org,rem;
    printf("enter a number:");
    scanf("%d",&n);
    org=n;
    if(n<=0) {
        printf("invalid input-enter a positive integer");
    }
    else {
        while(n!=0) {
        rem=n%10;
        break;
        }
        if(org%7==0||rem==7){
        printf("the number %d is a buzz number",org);
        }
        else{
        printf("the number %d is not a buzz number",org);
        }
    }
    return 0;
}