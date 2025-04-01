#include<stdio.h>
#include"paf.h"
int main(){
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	if(palindrome(x)) printf("palindrome=yes\n");
	else printf("palindrome=no\n");
	if(armstrong(x)) printf("armstrong=yes\n");
	else printf("armstrong=no\n");
	printf("factorial=%d\n",factorial(x));
return 0;
}
