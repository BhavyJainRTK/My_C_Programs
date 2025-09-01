#include <stdio.h>

int x, y, z;

void space(int x);
int main()
{
    printf("Enter the two value > ");
    scanf("%d %d", &y, &z);

    printf("How much space you want > ");
    scanf("%d", &x);

    printf("%d", y);
    space(x);
    printf("%d", z);
}

void space(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf(" ");
    }
}