//adam number using function
#include<stdio.h>
#include<math.h>
int reverse(int num); //function prototype
int reverse(int num) { //function defination
    int reverse=0,rem;
    while(num>0) {
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    return reverse;
}

int adamnumber(int num);
int adamnumber(int num) {
    int square=pow(num,2);
    int reversenum=reverse(num);
    int reversenumsq=pow(reversenum,2);
    return square==reverse(reversenumsq);
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(adamnumber(num))
    {
        printf("the number %d is adam number",num);
    }
    else
    {
        printf("the number %d is not a adam number",num);
    }
    return 0;
}