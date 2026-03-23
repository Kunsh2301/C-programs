//library function to calculate the area of a square with side a
#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("enter the side of the square:");
    scanf("%d",&a);
    printf("the area of the square is:%f",pow(a,2));
    return 0;
}