// count no. of vowel and consonant in a string
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char vc[100];
	int cons=0,vowel=0;
    gets(vc);
	for(int i=0;i<strlen(vc);i++){
		vc[i]=tolower(vc[i]);
		if(vc[i]>='a'&&vc[i]<='z'){
			if(vc[i]=='a'||vc[i]=='e'||vc[i]=='i'||vc[i]=='o'||vc[i]=='u')
		    vowel++;
		    else
		    cons++;
		}
	}
	printf("the number of vowel and consonant in the string are : %d %d",vowel,cons);
	
	return 0;
}
