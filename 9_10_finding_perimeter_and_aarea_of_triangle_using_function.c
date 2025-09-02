#include <stdio.h>
#include <math.h>

int perimeter(int n[0]);
double area(int n[0]);

int main()
{
    int side[3], f_perimter;
    double f_area;

    printf("Enter the sides of triangle > ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &side[i]);
    }

    f_perimter = perimeter(side);

    printf("perimeter of triangle > %d\n", f_perimter);

    f_area = area(side);

    printf("Area of triangle > %f", f_area);
}

int perimeter(int n[0])
{
    int perimeter = 0;
    for (int i = 0; i < 3; i++)
    {
        perimeter = perimeter + n[i];
    }

    return perimeter;
}

double area(int n[0])
{
    double s = 0;
    double area = 1;

    for (int i = 0; i < 3; i++)
    {
        s = s + n[i];
    }

    s = s/2.0;

    area = sqrt(s * (s - n[0]) * (s - n[1]) * (s - n[2]));

    return area;
    
}