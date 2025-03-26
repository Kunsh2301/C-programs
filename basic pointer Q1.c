//Write a program to print the address of a variable. Use this address to get the value of the variable
#include<stdio.h>
int main(){
    int a=5;
    printf("%p\n",&a);
    printf("%d",*(&a));
    return 0;
} 
