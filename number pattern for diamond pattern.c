//number pattern for diamond pattern.
#include<stdio.h>

int main()
{
    int rows,i,n,k;
    printf("enter the number of rows for upper half of rhombus including centre row:");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        for(n=1; n<=rows-i; n++)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(i=1; i<=rows-1; i++)
    {
        for(n=1; n<=i; n++)
        {
            printf(" ");
        }
        for(k=1; k<=2*(rows-1-i)+1; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}