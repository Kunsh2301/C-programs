/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these
 addresses same? Why?*/
#include<stdio.h>
int ad(int x){
   printf("%p",&x);
   return 0;
}
int main(){
    int i=5;
    printf("%p\n",&i);
    ad(i);
    return 0;
} 
//no the address will be diffrent as we are doing call by value in a function which creates a copy of variable...

/*"pointers are of void type" ? This is incorrect.

Pointers are not necessarily void type.

Pointers have specific types, like int*, float*, char*, etc.

A void pointer (void *) exists, but it is a generic pointer that can hold addresses of any type.

"they do not have any return type" ? Misleading statement.

Pointers do have types, and functions returning pointers must specify the return type.

Example: int* func() {} returns an int pointer.*/
