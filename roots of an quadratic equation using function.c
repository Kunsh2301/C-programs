//roots of an quadratic equation usning function 
#include<stdio.h>
#include<math.h>
void roots(int a,int b,int c);
void roots(int a,int b,int c) {
    if(a==0) {
        printf("invalid");
        return;
    }
    int d=b*b-4*a*c;
    double sqrt_value=sqrt(abs(d));
    if(d>0)
    {
        printf("roots are real and different\n");
        printf("%f\n%f",(double)(-b+sqrt_value)/2*a,(double)(-b-sqrt_value)/2*a);
    }
    else if(d==0)
    {
        printf("roots are real and same \n");
        printf("%f",(double)(-b)/2*a);
    }
    else
        printf("roots are complex\n");
    printf("%f+i%f\n%f-i%f",-(double)b/2*a,sqrt_value/2*a,-(double)b/2*a,sqrt_value/2*a);

}
int main()
{
    int a,b,c;
    printf("enter the constants a,b,c of quadratic equation:\n");
    scanf("%d %d %d",&a,&b, &c);
    roots(a,b,c);
    return 0;
}