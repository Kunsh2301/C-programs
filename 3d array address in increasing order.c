/*Create a three–dimensional array and print the address of its elements in increasing order*/
#include<stdio.h>
int main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	int arr[x][y][z];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
				printf("%u ",&arr[i][j][k]);
			}
		}
	}
return 0;
}
