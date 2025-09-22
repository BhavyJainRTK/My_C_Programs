#include <stdio.h>

int main()
{
    int n;
    int array[n];
    int *p = array; // declearing the  pointer

    printf("how many number you want to enter > ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf(" %d,", (p + i));
    }

    printf("\n");

    printf("(");
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %d,", *(p + i));
    }
    printf(")");
}