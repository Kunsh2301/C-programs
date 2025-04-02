// prime adam number using functions
#include<stdio.h>
int rev(int n){
	int rev=0;
	while(n!=0){
		rev=rev*10+(n%10);
		n/=10;
	}
	return rev;
}
int prime(int n){
	if(n<=1) return 0;
	if(n==2) return 1;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int adam(int n){
	int sqn=n*n,revn=rev(n),revnsq=revn*revn;
	if(rev(sqn)==revnsq) return 1;
	
}
int main(){
	int x;
	scanf("%d",&x);
	if(prime(x) && adam(x)) printf("the number %d is a prime adam number",x); 
return 0;
}
