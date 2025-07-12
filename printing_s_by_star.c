#include <stdio.h>

int main()
{
    char star = '*';
    int i, j;

    for (i = 0; i < 15; i++)
    {
        if (i == 3 || i == 4 || i == 5)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%c ", star);
            }
            printf("\n");
        }
        else if (i == 9 || i == 10 || i == 11)
        {
            for (j = 0; j < 18; j++)
            {
                if (j > 14 && j < 18)
                {
                    printf("%c ", star);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }

        else
        {
            for (j = 0; j < 18; j++)
            {
                printf("%c ", star);
            }
            printf("\n");
        }
    }
}