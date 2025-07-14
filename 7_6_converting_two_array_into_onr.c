#include <stdio.h>

int main()
{
    // DECLEARING VARIABLE AND ARRAY.

    int x, y;
    int a[10];
    int b[10];
    int c[20];

    int i, j, k;

    // SAVI NUMBER IN ARRAY A AND B.
    // USING LOOP.

    // YOU HABE TO ENTER THE NUMBER IN ASCENDING IN BOTH ARRAY.

    printf("HOW MANY NUMBER YOU WANT TO ENTER IN ARRAY A > ");
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        printf("> ");
        scanf("%d", &a[i]);
    }

    printf("HOW MANY NUMBER YOU WANT TO ENTER IN ARRAY B > ");
    scanf("%d", &y);

    for (j = 0; j < y; j++)
    {
        printf("> ");
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;
    k = 0;

    // MERGEING ARRAY A AND B IN ARRAY C.
    // IN ASCENDING ORDER.

    while (i < x && j < y)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // SAVING REST OF NUMBER.

    while (i < x)
    {
        c[k++] = a[i++];
    }
    while (j < y)
    {
        c[k++] = b[j++];
    }

    // PRINTING ARRAY C.

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}