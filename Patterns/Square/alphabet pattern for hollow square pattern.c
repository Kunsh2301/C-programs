//alphabet pattern for hollow square pattern.
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
        {
            if(i>1&&i<rows&&j>1&&j<rows)
            printf(" ");
            else
            printf("%c",j-1+'A');
        }
        printf("\n");
    }
    return 0;
}