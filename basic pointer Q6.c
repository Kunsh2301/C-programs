/*Write a program to print the value of a variable i by using “pointer to pointer” type of variable*/
#include<stdio.h>

int main(){
	int i;
	scanf("%d",&i);
	int *ptr1=&i;
	int **ptr2=&ptr1;
	printf("%d",**ptr2);
return 0;
} 

