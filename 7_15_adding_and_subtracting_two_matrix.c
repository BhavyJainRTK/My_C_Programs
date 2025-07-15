#include<stdio.h>

int main()
{
    int matrixA[10][10];
    int matrixB[10][10];
    int n;

    printf("ENTER THE ORDER OF MATRIX > ");
    scanf("%d",&n);
    printf("ENTER THE MATRIX A ");
    
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("> ");
            scanf("%d",&matrixA[i][j]);
        }
    }

    printf("ENTER THE MATRIX B ");

    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {    
            printf("> ");
            scanf("%d",&matrixB[i][j]);
        }
        
    }

    printf("\n");
    printf("MATRIX AFTER ADDING\n");

    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%d  ",matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("MATRIX AFTER SUBTRACTING\n");

    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%d  ",matrixA[i][j] - matrixB[i][j]);
        }
        printf("\n");
    }
}