//Write a function to convert Celsius temperature into Fahrenheit.
#include<stdio.h>
int convert();
int convert() {
    float celcius;
    printf("enter the temperature in degree celcius:");
    scanf("%f",&celcius);
    printf("the temperature in degree Fahrenheit is:%f",(double)9/5*celcius+32);
    return 0;
}

int main()
{
    convert();
    return 0;
}