#include<stdio.h>

int main()
{
    int num,a,b,c,d;

    printf("enter a four digit number : ");
    scanf("%d",&num);

    a = num/1000;
    num = num%1000;

    b = num/100;
    num = num%100;

    c = num/10;
    d = num%10;

    printf("SUM OF ALL DIGITS IS = %d ",a+b+c+d);
}