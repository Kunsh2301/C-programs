//find the highest and lowest value in an array
#include<stdio.h>
int main(){
	int n;
	printf("enter the length of the array:");
	scanf("%d",&n);
	if(n<=0){
		printf("invalid input");
		return 0;
	}
	int hl[n];
	for(int i=0;i<n;i++){
		scanf("%d",&hl[i]);
	}
	int low,high;
	low=hl[n-1];
	high=hl[0];
	for(int i=0;i<n;i++){
		if(hl[i]>high)
		high=hl[i];
		if(hl[i]<low)
		low=hl[i];
	}
	printf("the lowest element is %d and highest element is %d in the array",low,high);
return 0;
}
