/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
91 – 100 => A
81 – 90 => B
71 – 80 => C
61 – 70 => D
51 – 60 => E
<=50 => F
*/
#include<stdio.h>

int main()
{
    char grade;
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks<=100 && marks>90)
    {
    grade='A';
    }
    else if(marks<=90 && marks>80)
    {
    grade='B';
    }
    else if(marks<=80 && marks>70)
    {
    grade='C';
    }
    else if(marks<=70 && marks>60)
    {
    grade='D';
    }
    else if(marks<=60 && marks>50)
    {
    grade='E';
    }
    else if(marks<=50)
    {
    grade='F';
    }
    else
    {
    printf("enter marks from 1 to 100\n");
    }
    printf("your grade is %c \n", grade);
    return 0;
}