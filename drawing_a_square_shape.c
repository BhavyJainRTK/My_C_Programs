#include <stdio.h>

int main()
{
    int x;

    printf("ENTER THE SIZE OF THE SQUARE YOU WANT > ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("S  ");
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i > 0 && i < x-1)
            {
                if (j > 0 && j < x-1)
                {
                    printf("   ");
                }
                else
                {
                    printf("S  ");
                }
            }else{printf("s  ");}
        }
        printf("\n");
    }
}