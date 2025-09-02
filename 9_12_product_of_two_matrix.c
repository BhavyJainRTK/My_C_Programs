#include <stdio.h>

int product(int A[5][5], int B[5][5], int C[5][5], int n, int m, int p);

int m, n;
int main()
{
    int matrix_1[5][5], matrix_2[5][5], final_matrix[5][5];

    printf("Enter the dimention of matrix\nn > ");
    scanf("%d", &n);
    printf("m > ");
    scanf("%d", &m);

    printf("enter element for first matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("a%d%d > ", i + 1, j + 1);
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("enter element for second matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("b%d%d > ", i + 1, j + 1);
            scanf("%d", &matrix_2[i][j]);
        }
    }

    product(matrix_1, matrix_2, final_matrix, n, m, n);

    printf("\nProduct matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", final_matrix[i][j]);
        printf("\n");
    }
}

int product(int A[5][5], int B[5][5], int C[5][5], int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
            {
                for (int k = 0; k < m; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
}