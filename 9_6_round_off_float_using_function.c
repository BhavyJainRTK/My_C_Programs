#include <stdio.h>

void sol(float n);
int main()
{
    float f_num;

    printf("Enter a float number > ");
    scanf("%f", &f_num);

    sol(f_num);
}

void sol(float n)
{
    n = printf("%.2f", n);
}