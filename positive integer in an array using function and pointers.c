/*Write a program containing functions which counts the number of positive integers in an array*/
#include<stdio.h>
int counts(int *arr,int size){
	int pi=0;
	for(int i=0;i<size;i++){
		if(*(arr+i)>0) pi++;
	}
	return pi;
}
int main(){
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",counts(arr,n));
return 0;
}
 

