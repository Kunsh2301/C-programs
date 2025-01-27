//number pattern floyd's triangle
#include<stdio.h>

int main()
{
    int rows,number;
    printf("enter the number of rows and starting value of floyd's triangle:\n");
    scanf("%d %d",&rows,&number);
    printf("\n");
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",number);
            number+=1;
        }
        printf("\n");
    }
    return 0;
}