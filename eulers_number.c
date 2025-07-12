#include <stdio.h>
#include <math.h>

int main()
{
    double e = 0.0, y, f, x;
    int i, j;

    for (i = 0; i < 100; i++)
    {
        f = 1.0;
        for (j = i; j > 0; j--)
        {
            f = f * j;
        }

        y = 1 / f;

        e = e + y;

        if ((e - x) < 0.00001)
        {
            goto end;
        }

        x = e;
    }

end:
    printf("VALUE OF e = %.9f\n", e);
    printf("STAGE > %d ", i);
}