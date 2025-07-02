// find the area of triangle :

#include<stdio.h>
#include<math.h>

int main()
{
   float a,b,c,s,area;

   printf("enter the 1st side : ");
   scanf("%f",&a);

   printf("enter the 2nd side : ");
   scanf("%f",&b);

   printf("enter the 3rd side : ");
   scanf("%f",&c);

   s = (a + b + c) / 2;
   area = s*((s-a)*(s-b)*(s-c));
   
   printf("the area os the triangle is = %f", sqrt(area));

}
