//star pattern:hollow inverted full pyramid
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
            if(k>1&& k<2*(rows-i)+1&&i>1&&i<rows)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}