#include<stdio.h>
#include"paf.h"
int main(){
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	bool (*palin)(int) = palindrome;
    bool (*arms)(int) = armstrong;
    int  (*fact)(int) = factorial;
	if(palin(x)) printf("palindrome=yes\n");
	else printf("palindrome=no\n");
	if(arms(x)) printf("armstrong=yes\n");
	else printf("armstrong=no\n");
	printf("factorial=%d\n",fact(x));
return 0;
}
