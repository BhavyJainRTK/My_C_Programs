// finding the area and perimeter of rectangle :

#include<stdio.h>

int main()
{
    float length,width;
    float area,perimeter;

    printf("enter the length and width of the rectangle : ");
    scanf("%f %f",&length,&width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("the area is = %.2f square unit.\n",area);
    printf("the perimeter is = %.2f unit.",perimeter);
}