// display right most digit of integral part of float number :

#include<stdio.h>

int main()
{
    float num;
    int a;
    printf("enter a float number : ");
    scanf("%f",&num);

    a = num;
    a = a % 10;

    printf("right-most digit of the integral part of the number is = %d",a);
    
    
}