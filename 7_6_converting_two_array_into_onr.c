#include <stdio.h>

int main()
{
    int x, y;
    int a[10];
    int b[10];
    int c[20];

    int i, j, k;

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
    
    i =0;
    j =0;
    k=0;
    while (i < x && j < y)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < x)
    {
        c[k++] = a[i++];
    }
    while (j < y)
    {
        c[k++] = b[j++];
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}