#include <stdio.h>
#include <math.h>

int main()
{
    int x, i, j, f;
    double s2, s1, c1, c2;
    int sign = 1;
    float sum1 = 0.0;
    float sum2 = 0.0;
    double radians;

    printf("NETER THE VALUE OF X > ");
    scanf("%d", &x);

    radians = x * (3.14 / 180);

    for (i = 1; i < 100; i = i + 2)
    {
        f = 1;
        for (j = i; j > 0; j--)
        {
            f = f * j;
        }
        s1 = pow(radians, i);
        s2 = sign * (s1 / f);

        sum1 += s2;

        if ((s1 / f) < 0.00001)
        {
            goto sin;
        }

        sign *= -1;
    }

sin:
    printf("sin(%d) approx = %.3f \n", x, sum1);

    sign = 1;

    for (i = 0; i < 100; i = i + 2)
    {
        f = 1;
        for (j = i; j > 0; j--)
        {
            f = f * j;
        }
        c1 = pow(radians, i);
        c2 = sign * (c1 / f);

        sum2 += c2;

        if ((c1 / f) < 0.00001)
        {
            goto cos;
        }

        sign *= -1;
    }

cos:
    printf("cos(%d) approx = %.3f \n", x, sum2);
    return 1;
}