#include<stdio.h>

int large(int x_matrix[5][5]);

int m,n;
int main()
{  
    int matrix[5][5];
    int number;

    printf("Enter m > ");
    scanf("%d",&m);

    printf("Enter n > ");
    scanf("%d",&n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    number = large(matrix);

    printf("largest number > %d",number);

}

int large(int x_matrix[5][5])
{
    int num = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num < x_matrix[i][j])
            {
                num = x_matrix[i][j];
            }
        }
        
    }

    return num;
    
}