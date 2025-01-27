/*Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)*/
#include<stdio.h>

int main()
{
    float ceclcius;
    printf("enter the temperature in ceclius\n");
    scanf("%f",&ceclcius);
    printf("the temperature in fahrenheit is %f", 1.8*ceclcius+32); 
    return 0;
}