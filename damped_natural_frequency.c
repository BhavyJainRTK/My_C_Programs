#include <stdio.h>
#include <math.h>

int main()
{
    float l, c, r, a;

    printf("enter the inductance in the circuit : ");
    scanf("%f", &l);

    printf("enter the resistance in the circuit : ");
    scanf("%f", &r);

    printf("enter the capacitance in the circuit : ");
    scanf("%f", &c);

    a = (1 / (l * c)) - ((r * r) / (4 * (c * c)));

    printf("FREQUENCY = %f", sqrt(a));
}