#include <stdio.h>

// global variable

int n, m;

// input from user

void input(int *matrix1, int *matrix2)
{
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            printf("A(%d,%d) > ", i + 1, j + 1);
            scanf("%d", matrix1 + i * m + j);
        }

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            printf("B(%d,%d) > ", i + 1, j + 1);
            scanf("%d", matrix2 + i * m + j);
        }
}

// adding matrix

void adding(int *result, int *matrix1, int *matrix2)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            *(result + i * m + j) = *(matrix1 + i * m + j) + *(matrix2 + i * m + j);
}

// display matrix

void display(int *matrix)
{
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%-5d ", *(matrix + i * m + j));
        printf("\n");
    }
}

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];

    input(&matrix1[10][10], &matrix2[10][10]);           
    adding(&result[10][10], &matrix1[10][10], &matrix2[10][10]);  
    display(&result[10][10]);                         
}
