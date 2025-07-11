#include <stdio.h>

int main()
{
    float p, n, i = 1;
    float r, a;

    printf("ENTER THE AMOUNT > ");
    scanf("%f", &p);

    printf("INTREST RATE IN DECIMAL > ");
    scanf("%f", &r);

    printf("FOR HOW MUCH YEAR > ");
    scanf("%f", &n);

    printf("YEAR%11s\n", "AMOUNT");

    while (i <= n)
    {
        p = p + (p * r);
        printf(" %1.0f  %10.2f \n", i, p);
        i++;
    }
}