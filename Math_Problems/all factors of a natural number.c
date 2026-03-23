//WAP TO FIND ALL FACTORS OF A NATURAL NUMBER.
#include<stdio.h>

int main()
{
    int m;
    printf("enter a number:");
    scanf("%d",&m);
    printf("factors of %d are:\n",m);
    if(m<1)
    {
        printf("enter a valid number");
    }
    else
    {
        for(int i=1; i<=m; i++)
        {
            if(m%i==0)
                printf("%d\n",i);
        }
    }
        return 0;
}