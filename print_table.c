// write a program to output the multiplication table :

#include <stdio.h>

int main()
{
    int number,product,i;
    printf("enter the number whose table you have to write : ");
    scanf("%d",&number);
    for ( i = 1; i < 11; i++)
    {
        product = number * i;
        printf("%d X %d = %d\n",number,i,product);
    }
    
}