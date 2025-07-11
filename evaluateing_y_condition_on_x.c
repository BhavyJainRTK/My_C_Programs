/*  [1   for x > 0 ]
Y = [0   for x = 0 ]
    [-1  for x < 0 ]  */

#include<stdio.h>

int main()
{
    float x;
    int y;

    printf("ENTER THE VALUE OF X > ");
    scanf("%f",&x);

    y = (x != 0.0) ? ((x > 0.0) ? 1 : -1) : 0 ;

    printf("VALUE OF Y > %d\n",y);
}