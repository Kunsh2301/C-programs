/*Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.*/
#include<stdio.h>

int main()
{
    float s1,s2,s3,total_marks, percentage;
    printf("enter the marks of subject 1 ",s1);
    scanf("%f",&s1);
    printf("enter the marks of subject 2 ",s2);
    scanf("%f",&s2);
    printf("enter the marks of subject 3 ",s3);
    scanf("%f",&s3);
    total_marks=s1+s2+s3;
    percentage=(total_marks/300)*100;
    if( percentage>=40 && s1>=33 && s2>=33 && s3>=33)
    {
    printf("student is passed with a  %f %%", percentage);
    }
    else
    {
    printf("student is failed");
    }
    return 0;
}
