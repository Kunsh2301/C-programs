//number pattern for inverted left half pyramid.
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1;j<i;j++)
        {
        printf(" ");
        }
        for(int k=1;k<=(rows-i)+1;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}