//WAP TO CALCULATE LENGTH OF STRING WITHOUT USING BUILT IN FUNCTIONS
#include<stdio.h>
#include<stdlib.h>
int main(){
	char arr[100],length=0;
	gets(arr);
	while(arr[length]!='\0') length++;
	printf("%d",length);
return 0;
}
