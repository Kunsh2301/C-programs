//alphabet pattern for hollow hourglass pattern
#include<stdio.h>

int main()
{
    int rows;
    printf("enter the upper half rows including middle one:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*(rows-i)+1; k++)
        {
            if(i>1&&k>1&&k<2*(rows-i)+1)
                printf(" ");
            else
                printf("%c",k-1+'A');
        }
        printf("\n");
    }
    for(int i=2; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            if(i<rows&&k>1&&k<2*i-1)
                printf(" ");
            else
                printf("%c",k-1+'A');
        }
        printf("\n");
    }
    return 0;
}