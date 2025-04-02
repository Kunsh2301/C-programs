//Calculate the Average of All the Elements Present in an Array 
#include<stdio.h>
int main(){
	int n;
	printf("enter the length of the array:");
	scanf("%d",&n);
	if(n<=0){
		printf("invalid input");
		return 0;
	}
	int avg[n],sum=0;
	printf("enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&avg[i]);
		sum+=avg[i];
	}
	printf("average=%.2f",(double)sum/n);
return 0;
}
