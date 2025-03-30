//Write a program to take string as an input from the user using %c and %s confirm that the strings are equal
#include<stdio.h>
int main(){
	char arr[6];
	for(int i=0;i<5;i++){
		scanf("%c",&arr[i]);
	}
	arr[5]='\0';
	for(int i=0;i<5;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
	printf("%s",arr);
return 0;
}
