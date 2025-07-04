// display two right most digit of integral part of float number

#include<stdio.h>

int main()
{
    float num;
    int x;
    printf("enter a float number : ");
    scanf("%f",&num);

    x = num;
    x = x % 100;

    printf("right-most digit of the integral part of the number is = %d",x);
}