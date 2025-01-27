//star pattern for hollow full pyramid 
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            if(k>1&&k<2*i-1&&i>1&&i<rows)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}