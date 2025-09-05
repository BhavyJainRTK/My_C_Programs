#include <stdio.h>

int main()
{
    int matrix[3][3], e_matrix[3][3], count = 0;

    printf("Enter the elements of matrix > \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a%d%d > ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count = 0;

            if (matrix[i][j] == 0)
            {
                count = 1;
            }
            else
            {
                while (matrix[i][j] > 0 || matrix[i][j] < 0)
                {
                    matrix[i][j] = matrix[i][j] / 10;
                    count++;
                }
            }
            e_matrix[i][j] = count;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\na%d%d have %d digits.", i + 1, j + 1, e_matrix[i][j]);
        }
    }
}