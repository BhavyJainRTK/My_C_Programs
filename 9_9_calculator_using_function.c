#include <stdio.h>

void reading(int *x, int *y);
int addition(int x, int y);
int subtract(int x, int y);
int product(int x, int y);
int devision(int x, int y);

int main()
{
    int x, y, sum, sub, pro, div;
    reading(&x, &y);
    printf("%d%d", x, y);

    sum = addition(x, y);
    printf("addition = %d\n",sum);

    sub = subtract(x, y);
    printf("difference = %d\n",sub);

    pro = product(x, y);
    printf("product = %d\n",pro);

    div = devision(x, y);
    printf("devision = %d\n",div);
}

void reading(int *x, int *y)
{
    printf("Enter two number x > ");
    scanf("%d", x);
    printf("y > ");
    scanf("%d", y);
}

int addition(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int product(int x, int y)
{
    return x * y;
}

int devision(int x, int y)
{
    return x / y;
}