//alphabet pattern for left half pyramid
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows for right half pyramid pattern:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=rows; j>i; j--)
        {
            printf(" ");
        }
        for(int x=1;x<=i;x++)
        {
        printf("%c",'A'+x-1);
        }
        printf("\n");
    }
    return 0;
}