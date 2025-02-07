/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8 m/s^2 */
#include<stdio.h>
int force(float m);
int force(float m){
printf("enter the mass in kg:");
scanf("%f",&m);
printf("the force due to mass %0.3f on earth is:%0.3fkg-m/s^2",m,9.8*m);
}
int main()
{
    float m;
    force(m);
    return 0;
}