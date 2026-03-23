//alphabet pattern full pyramid.
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows for right half pyramid pattern:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            printf("%c",'A'+k-1);
        }
        printf("\n");
    }
    return 0;
}