// wap to concatenate two strings
#include<stdio.h>
#include<strings.h>
int main(){
	char s1[100],s2[100];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	s1[strcspn(s1,"\n")] ='\0';
    s2[strcspn(s2,"\n")] ='\0';
	printf("%s",strcat(s1,s2));
	return 0;
}
