// finding are of circle using radius :

#include<stdio.h>

int main()
{
    float radius,pi=3.14,area;
    
    printf("enter the radius of the circle : ");
    scanf("%f",&radius);

    area = (pi * (radius * radius));

    printf("the are of the cicle is = %f",area);
}