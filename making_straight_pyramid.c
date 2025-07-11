#include <stdio.h>

int main()
{
    int layer, i, j;

    printf("HOW MUCH LAYER YOU WANT > ");
    scanf("%d", &layer);

    for (i = 1; i <= layer; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        j = 0;
        printf("\n");
    }
}