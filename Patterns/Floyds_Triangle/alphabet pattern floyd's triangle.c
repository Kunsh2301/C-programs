//alphabet pattern floyd's triangle
#include<stdio.h>

int main()
{
    int rows;
    char alphabet;
    printf("enter the number of rows and starting alphabet of floyd's triangle:\n");
    scanf("%d %c",&rows,&alphabet);
    printf("\n");
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c", alphabet);
            alphabet+=1;
        }
        printf("\n");
    }
    return 0;
}