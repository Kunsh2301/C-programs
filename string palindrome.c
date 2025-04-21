// check if a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
	char palin[100];
	printf("enter a string:");
	int palind=1;
	scanf("%s",&palin);
	for(int i=0;i<strlen(palin);i++){
		if(palin[i]!=palin[strlen(palin)-1-i]){
			palind=0;
			break;
		}
	}
	if(palind) printf("true");
	else printf("false");
return 0;
}
