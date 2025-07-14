#include<stdio.h>

int main()
{
    int x;

    printf("ENTER THE SIZE OF SQUARE [ONLY ADD NO.] > ");
    scanf("%d",&x);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == x/2 && j == x/2)
            {
                printf("O  ");
            }
            else
            {
                printf("S  ");
            }
        }
        printf("\n");
    }
}