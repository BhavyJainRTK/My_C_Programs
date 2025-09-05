#include <stdio.h>

int calculate(int a[3][3],int b[3][3]);

int  count = 0;
int main()
{
    int matrix[3][3], e_matrix[3][3];

    printf("Enter the elements of matrix > \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a%d%d > ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    calculate(matrix,e_matrix);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\na%d%d have %d digits.", i + 1, j + 1, e_matrix[i][j]);
        }
    }
}

int calculate(int a[3][3],int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count = 0;

            if (a[i][j] == 0)
            {
                count = 1;
            }
            else
            {
                while (a[i][j] > 0 || a[i][j] < 0)
                {
                    a[i][j] = a[i][j] / 10;
                    count++;
                }
            }
            b[i][j] = count;
        }
    }
}