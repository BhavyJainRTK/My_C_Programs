// write a program to determine and print the sum of the followint harmonic series for a given value of n :
//    1 + 1/2 + 1/3 ...... 1/n :

#include<stdio.h>

int main()
{
    typedef float unitf;
    unitf n,sum=0,i=1,value;

    printf("enter the value of n : ");
    scanf("%f",&n);

    while (i <= n)
    {
        value = 1/i;
        sum = sum + value;
        i = i + 1.0;
    }
    
    printf("the sum is %f",sum);

}