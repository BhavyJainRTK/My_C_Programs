#include<stdio.h>

int main()
{
    // DECLEARING VARIABLE AND MATRIZ.

    int matrixa[10][10];
    int matrixb[10][10];
    int matrixc[10][10];
    int x;

    // MATRI 1.

    printf("ENTER THE DIMENTION OF MATRIX> ");
    scanf("%D",&x);
    printf("ENTER IN MATRIX 1\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d",&matrixa[i][j]);
        }
        
    }
    
    // MATRIX 2.

    printf("ENTER IN MATRIX 2\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d",&matrixb[i][j]);
        }
        
    }

    // MULTIPLYING MATRIX.

    printf("ENTER IN MATRIX x\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            matrixc[i][j] = matrixa[i][j] * matrixb[i][j];
        }
        
    }

    // PRINTING MATRIX.

    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d  ",matrixc[i][j]);
        }
        printf("\n");
    }
    
}