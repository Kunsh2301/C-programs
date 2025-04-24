#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include"paf.h"
bool palindrome(int n){
	if (n==0) return true;
	int org=n,rev=0;
	while(n!=0){
		rev=10*rev+(n%10);
		n/=10;
	}
	if(rev==org) return true;
	return false;
}
bool armstrong(int n){
	if(n==0) return true;
	int org=n;
	int rem,sum=0,count=0;
	while(n>0){
    n/=10;
    count+=1;
    }
    n=org;
    while(n>0){
    rem=n%10;
    sum+=(int)pow(rem,count);
    n/=10;
    }
    if(sum==org) return true;
    return false;
}
int factorial(int n){
	int fact=1;
	for(int i=n;i>=1;i--){
		fact*=i;
	}
	return fact;
}

