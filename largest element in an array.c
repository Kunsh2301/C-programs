//largest element in an array
#include<stdio.h>
int main(){
	int n;
	printf("enter the length of the array:");
	scanf("%d",&n);
	if(n<=0){
		printf("invalid input");
		return 0;
	}
	int larg[n];
	for(int i=0;i<n;i++){
		scanf("%d",&larg[i]);
	}
	int largest=larg[0];
	for(int i=1;i<n;i++){
		if(larg[i]>largest)
		largest=larg[i];
	}
	printf("the largest element of the array is:%d",largest);
return 0;
}
