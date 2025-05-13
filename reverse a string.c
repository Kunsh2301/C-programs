// wap to reverse a string
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	fgets(s,sizeof(s),stdin);
	for(int i=strlen(s);i>=0;i--){
		printf("%c",s[i]);
	}
	return 0;
}
