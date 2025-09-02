#include <stdio.h>

int m, n;
int matrix[5][5];

int main()
{
    printf("Enter m and n\nm > ");
    scanf("%d", &m);

    printf("n > ");
    scanf("%d", &n);

    // Input matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate row averages
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += matrix[i][j];

        double avg = (double)sum / n;
        printf("Average of row %d = %.2lf\n", i + 1, avg);
    }

    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += matrix[i][j];
        double avg = (double)sum / m;
        printf("Average of column %d = %.2lf\n", j + 1, avg);
    }

    return 0;
}