#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    char w;

    printf("(S) > Sin(x).\n");
    printf("(C) > cos(x).\n");
    printf("(T) > Tan(x).\n");
    printf("ENTER YOUR CHOICE > ");
    scanf("%c", &w);

    printf("ENTER THE VALUE OF X > ");
    scanf("%lf", &x);

    x = x * (3.14 / 180);

    if (w == 's' || w == 'S')
    {
        printf("Sin(x) = %.2f", sin(x));
    }
    else if (w == 'c' || w == 'C')
    {
        printf("Cos(x) = %.2f", cos(x));
    }
    else if (w == 't' || w == 'T')
    {
        printf("tan(x) = %.2f", tan(x));
    }
}