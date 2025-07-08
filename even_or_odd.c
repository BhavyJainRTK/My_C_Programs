#include<stdio.h>

int main()
{
    int num;

    printf("enter the number : ");
    scanf("%d",&num);

    printf("the number is %s.",(num%2 == 0) ? "EVEN" : "ODD");

}