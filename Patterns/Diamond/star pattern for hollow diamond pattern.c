//star pattern for hollow diamond pattern.
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the upper half rows including the middle one:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            if(k>1&&k<2*i-1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=rows-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*(rows-1-i)+1; k++)
        {
            if(k>1&&k<2*(rows-1-i)+1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}