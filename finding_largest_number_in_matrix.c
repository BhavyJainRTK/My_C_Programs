#include<stdio.h>

int largest(int a[3][3],int n);
int main()
{
    int matrix[3][3],large=0;
    printf("Enter the elements of matrix > \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a%d%d > ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("largest number in the matrix > %d",largest(matrix,large));
    
}

int largest(int a[3][3],int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > n)
            {
                n = a[i][j];
            }
            
        }
    } 
    return n;
}