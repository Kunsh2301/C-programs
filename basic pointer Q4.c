/*Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum
and average in main()*/
#include<stdio.h>
void sumavg(int a,int b,int *sum,float *avg){
	*sum=a+b;
	*avg=*sum/2.0;
}
int main(){
    int x,y,sum;
	float avg;
    scanf("%d %d",&x,&y);
    sumavg(x,y,&sum,&avg);
    printf("sum=%d , avg=%0.2f",sum,avg);
    return 0;
} 

