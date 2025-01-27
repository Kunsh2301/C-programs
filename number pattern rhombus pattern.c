//number pattern for rhombus pattern.
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i =1; i<=rows; i++)
    {
        for(int n=1; n<=i-1; n++)
        {
            printf(" ");
        }
        for(int k=1; k<=rows; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}