//number pattern reverse floyd's triangle
#include<stdio.h>

int main()
{
    int rows;
    int number;
    printf("enter the number of rows and starting alphabet of floyd's triangle:\n");
    scanf("%d\n",&rows);
    scanf("%d",&number);
    printf("\n");
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", number);
            number-=1;
        }
        printf("\n");
    }
    return 0;
}