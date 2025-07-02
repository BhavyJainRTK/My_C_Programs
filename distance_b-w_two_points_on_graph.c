// find the distance between two points on the graps :

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,distance;
    
    printf("enter the frist co-ordinat (x1,y1) : ");
    scanf("%f %f",&x1,&y1);

    printf("enter the second co-ordinat (x2,y2) : ");
    scanf("%f %f",&x2,&y2);

    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("the distance between the points is = %f",sqrt(distance));
}