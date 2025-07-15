#include<stdio.h>

int main()
{
    int matrix[10][10];
    int transpose[10][10];
    int m,n;

    printf("ENTER THE DIMENTIONS OF THE MATRIX M & N > ");
    scanf("%d %d",&m,&n);
    
    printf("ENTER THE MATRIX\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("> ");
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("ORIGINAL MATRIX\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
     
    printf("TRANSPOSED MATRIX\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }
}