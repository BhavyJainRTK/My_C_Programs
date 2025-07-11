#include <stdio.h>

int main()
{
    int layer;
    int i, j, x;

    printf("HOW MUCH LAYER YOU WANT > ");
    scanf("%d", &layer);

    for (i = 0; i < layer; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (x = 0; x < layer - i; x++)
        {
            printf("* ");
        }
        printf("\n");
    }
}