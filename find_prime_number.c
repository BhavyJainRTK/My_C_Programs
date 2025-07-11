#include <stdio.h>

int main()
{
    int l_range, h_range;
    int i, j, n;

    printf("ENTER THE LOER RANGE > ");
    scanf("%d", &l_range);

    printf("ENTER THE HIGHEST RANGE >");
    scanf("%d", &h_range);

    for (i = l_range; i < h_range; i++)
    {
        n = 0;
        for (j = i; j > 0; j--)
        {
            if (i % j == 0)
            {
                n = n + 1;
            }
        }
        if (n == 2)
        {
            printf("%d  ", i);
        }
    }
}