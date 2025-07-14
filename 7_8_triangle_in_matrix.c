#include <stdio.h>

int main()
{
    // DECLEARING VARIABLE AND MATRIZ.

    int matrix[10][10];
    int x;

    // DETECTING DIMENTION OF MATRIX.

    printf("ENTER THE DIMENTION OF MATRIX > ");
    scanf("%d", &x);

    // SAVING 1 , 0 , -1 IN THE MATRIX.
    // USING LOOP.

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i + j == x - 1)
            {
                matrix[i][j] = 0;
            }
            else if (i + j < x - 1)
            {
                matrix[i][j] = 1;
            }
            else if (i + j > x - 1)
            {
                matrix[i][j] = -1;
            }
        }
    }

    // PRINTING THE FINAL MATRIX

    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%2d  ", matrix[i][j]);
        }
        printf("\n");
    }
}