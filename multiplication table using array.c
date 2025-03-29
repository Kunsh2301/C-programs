/*Write a program to create an array of 10 integers and store multiplication table */
#include<stdio.h>

int main(){
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	printf("multiplication table of %d is:\n",x);
	int multiply[10];
	for(int i=0;i<10;i++){
		multiply[i]=(i+1)*x;
	}
	for(int i=0;i<10;i++){
		printf("%d x %d = %d\n",x,i+1,multiply[i]);
	}
	
return 0;
} 

