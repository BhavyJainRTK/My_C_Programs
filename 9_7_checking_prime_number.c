#include <stdio.h>

int prime(int n);

int x = 0;
int main()
{
    int number, result;
    printf("Enter a number > ");
    scanf("%d", &number);

    result = prime(number);
    printf("1 > yes | 0 > no\n");
    printf("ans > %d", result);
}

int prime(int n)
{
    for (int i = n; i > 0; i--)
    {
        if ((n % i) == 0)
        {
            x = x + 1;
        }
    }

    if (x == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}