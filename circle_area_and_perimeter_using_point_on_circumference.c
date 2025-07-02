// find the area and perimeter of circle if the center is (0,0) and another point is on circumference of the circle :

#include<stdio.h>
#include<math.h>
int main()
{
    float x2,y2,radius,area,perimeter,pi=3.14;
    
    printf("enter the points on circumference of the circle : ");
    scanf("%f %f",&x2,&y2);

    radius = ((x2-0)*(x2-0))+((y2-0)*(y2-0));
    radius = sqrt(radius);

    area = (pi * (radius * radius));
    perimeter = 2 * pi * radius;
    
    printf("the area is = %f \nthe perimeter is = %f ",area,perimeter);
}