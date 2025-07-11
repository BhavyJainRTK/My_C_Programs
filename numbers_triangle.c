#include <stdio.h>

int main()
{
    int num, i, j;
    int layers[10][10];
    int x = 1, y = 1, n = 1;

    printf("enter the layers of triangle you want : ");
    scanf("%d", &num);

    if (num > 10 || num < 0 )
    {
        printf("enter a value greater then 0 and less then 11");
    }
    

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            layers[i][j] = 0;
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            layers[i][j] = n;
            n = n + 1;
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
            if (layers[i][j] != 0)
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