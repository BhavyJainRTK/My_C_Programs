// taking two float values from user and divide first number by second number :

#include<stdio.h>

int main()
{
    typedef float values;
    values v1,v2,v3;

    printf("enter the first number and second number : ");
    scanf("%f %f",&v1,&v2);

    v3 = v1 / v2;

    printf("dividing number %f by %f we get > %f ",v1,v2,v3);
}