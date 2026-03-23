//alphabet pattern for inverted full pyramid.
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*(rows-i)+1; k++)
        {
            printf("%c",k-1+'A');
        }
        printf("\n");
    }
    return 0;
}