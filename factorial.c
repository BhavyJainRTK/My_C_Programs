#include <stdio.h>

int main()
{
    int num, i;
    int sol = 1;

    printf("ENTER YOUR NUMBER > ");
    scanf("%d", &num);

    i = num;

    while (i != 0)
    {
        sol = sol * i;
        i = i - 1;
    }
    printf("FACTORIAL OF NUMBER %d IS > %d", num, sol);
}