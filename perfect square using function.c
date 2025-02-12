//perfect square using functions
#include<stdio.h>
#include<math.h>
int squareroot(int n) {
    if(n<0) {
        printf("enter a valid number");
    }
    else {
     int root=sqrt(n);
     if(root*root==n)
     printf("the number %d is a perfect square",n);
     else
     printf("the number %d is not a perfect square",n);
    }
    return 0;
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    squareroot(x);
    return 0;
}