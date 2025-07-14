#include <stdio.h>

int main()
{
    int layer;
    int triangler[50][50];
    int sum = 0;

    printf("how much layer you want > ");
    scanf("%d", &layer);

    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < layer; j++)
        {
            triangler[i][j] = 0;
        }
    }

    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum = 0;
            if (i == j || j == 0)
            {
                triangler[i][j] = 1;
            }
            else
            {
                sum = sum + (triangler[i - 1][j - 1] + triangler[i - 1][j]);
                triangler[i][j] = sum;
            }
            printf("%5d ", triangler[i][j]);
        }
        printf("\n");
    }
}
