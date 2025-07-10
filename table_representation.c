/* if we enter 3.4 then we have have to aline x at 3 row and 4 collom in a table */

#include <stdio.h>

int main()
{
    char table[10][10];
    float x, y;
    int x1, x2, y1, y2, i, j;

    printf("enter the value in x > ");
    scanf("%f", &x);
    printf("y > ");
    scanf("%f", &y);

    x1 = (int)x;
    x2 = (int)(x * 10) % 10;

    y1 = (int)y;
    y2 = (int)(y * 10) % 10;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            table[i][j] = ' ';
        }
    }

    table[x1][x2] = 'x';
    table[y1][y2] = 'y';
    printf("NUMBER  ");
    for (j = 0; j < 10; j++)
    {
        printf("%4.1f  ", j / 10.0);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%4.1f  ", (float)i);
        for (j = 0; j < 10; j++)
        {
            printf("   %c  ", table[i][j]);
        }
        printf("\n");
    }
}