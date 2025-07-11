#include<stdio.h>
#include<math.h>

int main()
{
    double x;
    char w;

    printf("(S) > Sin(x).\n");
    printf("(C) > cos(x).\n");
    printf("(T) > Tan(x).\n");
    printf("ENTER YOUR CHOICE > ");
    scanf("%c",&w);

    printf("ENTER THE VALUE OF X > ");
    scanf("%lf",&x);

    switch (w)
    {
    case 's':
    case 'S':
        printf("Sin(x) = %.2f",sin(x));
        break;
    
    case 'c':
    case 'C':
        printf("Cos(x) = %.2f",cos(x));
        break;

    case 't':
    case 'T':
        printf("tan(x) = %.2f",tan(x));
        break;
        
    default:
        break;
    }

}