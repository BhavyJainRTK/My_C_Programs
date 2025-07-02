// the points lie on the circumference of a circle is the diameter of the circle calculate the area :

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,y1,y2,diameter,radius,area,pi=3.14;

    printf("enter the frist co-ordinat (x1,y1) : ");
    scanf("%f %f",&x1,&y1);

    printf("enter the second co-ordinat (x2,y2) : ");
    scanf("%f %f",&x2,&y2);

    diameter = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    radius = (sqrt(diameter))/2;
    area = (pi * (radius * radius));
    
    printf("the area of the circle is = %f",area);

}