//right half pyramid using function
#include<stdio.h>
void pattern(int rows);
void pattern(int rows) {
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    pattern(rows);
    return 0;
}
