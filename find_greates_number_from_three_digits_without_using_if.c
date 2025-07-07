#include<stdio.h>

int main()
{
    int a,b,c;

    printf("enter the first number : ");
    scanf("%d",&a);

    printf("second : ");
    scanf("%d",&b);

    printf("third : ");
    scanf("%d",&c);

    while (a>b && a>c)
    {
        printf("%d is the greatest number",a);
        break;
    }

    while (b>a && b>c)
    {
        printf("%d is the greatest number",b);
        break;
    }

    while (c>a && c>b)
    {
        printf("%d is the greatest number",c);
        break;
    }
    
    
    
}