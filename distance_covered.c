/* to find out distance covered by a object */

#include<stdio.h>

int main()
{
    float s,u,t,a;
    
    printf("enter the initial speed [M/s] : ");
    scanf("%f",&u);

    printf("enter the time [s] : ");
    scanf("%f",&t);
    t = t*t;

    printf("enter the acceleration [M/s] :");
    scanf("%f",&a);
    
    s = (u*t) + ((1/2) *(a*t));

    printf("the distance = %f M",s);
}