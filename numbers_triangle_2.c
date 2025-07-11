#include <stdio.h>

int main()
{
    int num, i, j;
    int layers[10][10];
    int x = 1, y = 0, n = 1;
    int q;

    printf("enter the layers of triangle you want : ");
    scanf("%d", &num);
    q = num - 1;
    if (num > 10 || num < 0)
    {
        printf("enter a value greater then 0 and less then 11");
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            layers[i][j] = 2;
        }
    }

    for (j = 0; j < x; j++)
    {
        for (i = y; i < num; i++)
        {
            layers[i][j] = n;
            if (n == 1)
            {
                n = 0;
            }
            else
            {
                n = 1;
            }
            if (i == q)
            {
                n = 1;
            }
        }
        y = y + 1;
        x = x + 1;

        if (j == num)
        {
            goto print;
        }
    }

print:
    printf("\nHERE IS YOUR TRIANGLE\n");

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (layers[i][j] != 2)
            {
                printf(" %-3d", layers[i][j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}