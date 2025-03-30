/*create a 2d array of size nx10 where n consist of multiplication table numbers*/
#include<stdio.h>
int main(){
	int n;
	printf("enter the total number of diffrent multiplication table u want:");
	scanf("%d",&n);
	int numbers[n];
	for(int i=0;i<n;i++){
		scanf("%d",&numbers[i]);
	}
	int multiply[n][10];
    for(int i=0;i<n;i++){
    	printf("the multiplication table of %d is:\n",numbers[i]);
    	for(int j=0;j<10;j++){
    		printf("%d x %d = %d\n",numbers[i],j+1,numbers[i]*(j+1));
		}
	}
return 0;
}
