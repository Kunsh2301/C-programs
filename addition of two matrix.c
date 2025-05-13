//sum of two matrices
#include<stdio.h>
int main(){
	int m1[100][100],m2[100][100],sum[100][100];
	int m1r,m1c,m2r,m2c;
	printf("enter the number of rows and column for matrix 1:");
	scanf("%d %d",&m1r,&m1c);
	printf("enter the number of rows and column for matrix 2:");
	scanf("%d %d",&m2r,&m2c);
	if(m1r!=m2r || m1c!=m2c){
		printf("matrix addition not possible for diffrent rows and column of matrices");
		return 0;
	}
	printf("enter the elements of first matrix\n");
	for(int i=1;i<=m1r;i++){
		for(int j=1;j<=m1c;j++){
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	printf("enter the elements of second matrix\n");
	for(int i=1;i<=m2r;i++){
		for(int j=1;j<=m2c;j++){
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	
	for(int i=1;i<=m1r;i++){
		for(int j=1;j<=m1c;j++){
			sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("sum of the matrix is\n");
	for(int i=1;i<=m1r;i++){
		for(int j=1;j<=m1c;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
