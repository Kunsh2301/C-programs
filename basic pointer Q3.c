/*Write a function for swapping of two numbers and pass the value by reference*/
#include<stdio.h>
int newval(int *x,int *y){
   int new=*x;
   *x=*y;
   *y=new;
   return 0;
}
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    newval(&i,&j);
    printf("%d %d",i,j);
    return 0;
} 

