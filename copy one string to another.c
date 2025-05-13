//WAP TO COPY ONE STRING TO ANOTHER STRING
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	fgets(s1,sizeof(s1),stdin);
	strcpy(s2,s1);
	printf("%s",s2);
	return 0;
}
