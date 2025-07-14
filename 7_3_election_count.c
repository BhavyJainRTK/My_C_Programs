#include <stdio.h>

int main()
{
    int cand[10][5] = {0};
    int people;
    int who, to;
    int i, j;
    int a, b, c, d, e, f, max;
    int sum;

    printf("CANDIDATES ARE [1] [2] [3] [4] [5] {6 > don't want to give any one\n");

    printf("HOW MUCH PEOPLE HAVE TO GIVE VOTE > ");
    scanf("%d", &people);

    for (i = 0; i < people; i++)
    {
        printf("PERSON [%d] PLEASE ENTER > ", i + 1);
        scanf("%d", &to);
        cand[i][to - 1] = 1;
    }

    for (j = 0; j < 6; j++)
    {
        sum = 0;
        for (i = 0; i < people; i++)
        {
            sum = sum + cand[i][j];
        }
        if (j == 0)
        {
            a = sum;
        }
        else if (j == 1)
        {
            b = sum;
        }
        else if (j == 2)
        {
            c = sum;
        }
        else if (j == 3)
        {
            d = sum;
        }
        else if (j == 4)
        {
            e = sum;
        }
        else if (j == 5)
        {
            f = sum;
        }
    }

    max = 0;
    i = 0;

    if (a > max)
    {
        max = a;
        i = 1;
    }
    if (b > max)
    {
        max = b;
        i = 2;
    }
    if (c > max)
    {
        max = c;
        i = 3;
    }
    if (d > max)
    {
        max = d;
        i = 4;
    }
    if (e > max)
    {
        max = e;
        i = 5;
    }

    printf("*CONGRULATIONS*\ncandidate %d won the election\n", i);
    printf("vote not given to any one > %d", f);
}