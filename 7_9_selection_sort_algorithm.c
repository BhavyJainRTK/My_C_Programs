#include <stdio.h>

int main()
{
    // DECLEARING THE VARIABLE AND ARRAY.

    int array[10];
    int n;

    printf("HOW MANY ELEMENT YOU WANT TO ENTER > ");
    scanf("%d", &n);

    // TAKING INPUT FROM USER.

    for (int i = 0; i < n; i++)
    {
        printf("[%d] > ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int position = 0;

        // FINDING MAX VALUE AT WHICH POSITION.

        for (int j = 1; j < n - i; j++)
        {
            if (array[j] > array[position])
            {
                position = j;
            }
        }

        // SWAPING THE VALUES.

        int x = array[position];
        array[position] = array[n - 1 - i];
        array[n - 1 - i] = x;
    }

    printf("\n");

    // OUTPUT TO USER.

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
}