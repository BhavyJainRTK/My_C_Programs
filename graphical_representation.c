#include <stdio.h>
#include <math.h>

int main()
{
    float x, a = 0.4;
    int y1, y2, i;

    for (x = 0; x <= 5; x += 0.25)
    {
        y1 = (int)(50 * exp(-a * x) + 0.5);
        y2 = (int)(50 * exp(-a * x * x / 2) + 0.5);

        if (y1 == y2)
        {
            for (i = 0; i < y1; i++)
                printf(" ");
            printf("#\n");
        }
        else if (y1 > y2)
        {
            for (i = 0; i < y2; i++)
                printf(" ");
            printf("O");
            for (i = 0; i < y1 - y2 - 1; i++)
                printf("-");
            printf("*\n");
        }
        else
        {
            for (i = 0; i < y1; i++)
                printf(" ");
            printf("*");
            for (i = 0; i < y2 - y1 - 1; i++)
                printf("-");
            printf("O\n");
        }
    }
}
