// give the value of three vaciables a, b snd c, write a program to compute and display the valur of x 
// where  x = a/(b-c)

#include<stdio.h>

int main()
{
    float a,b,c,x,denominator;

    printf("enter the value of a : ");
    scanf("%f",&a);

    printf("enter the value of b : ");
    scanf("%f",&b);

    printf("enter the value of c : ");
    scanf("%f",&c);

    denominator = b -c ;
    x = a / denominator ;

    printf("the value of the x = %f ",x);
}