#include<stdio.h>

int main()
{
    int matrix[10][10];
    int x;

    printf("ENTER THE DIMENTION OF MATRIX > ");
    scanf("%d",&x);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i + j == x-1)
            {
                matrix[i][j]=0;
            }
            else if (i + j < x-1)
            {
                matrix[i][j]=1;
            }
            else if (i + j > x-1)
            {
                matrix[i][j]=-1;
            }
            
        }
        
    }
    
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%2d  ",matrix[i][j]);
        }
        printf("\n");
    }
}