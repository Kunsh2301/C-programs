//compare two strings without built in functions
#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	s1[strcspn(s1,"\n")]='\0';
	s2[strcspn(s2,"\n")]='\0';
	int i=0,sex=0;
	while(s1[i]!='\0'||s2[i]!='\0'){
		if(s1[i]!=s2[i]){
			sex=1;
			break;
		}
		i++;
	}
	if(sex) printf("not equal strings");
	else printf("equal strings");
	return 0;
}

