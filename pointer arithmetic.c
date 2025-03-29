/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer
pointing to the first element of the array. */
#include<stdio.h>

int main(){
	int kunsh[10];
	for(int i=0;i<10;i++){
		scanf("%d",&kunsh[i]);
	}
	int *ptr;
	ptr=kunsh;  //it stores the zeroth index element to the pointer ptr as a memory address
	printf("the third element using array is:%d\n",kunsh[2]);
	printf("the third element using pointer is:%d\n",*(ptr+2));
return 0;
} 

