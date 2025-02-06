//Write a program using function to find average of three numbers
#include<stdio.h>
int average();
int average(){
int n1,n2,n3;
printf("enter three numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
printf("the average of the given numbers is:%0.2f",(n1+n2+n3)/3.0);
return 0;
}
int main()
{
     average(); 
    return 0;
}