#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    // INPUT THE NUMBER AS A STRING

    printf("ENTER A NUMBER > ");
    scanf("%s", str);

    int length = strlen(str);

    // LOOP TO PRINT EACH ROW OF THE PYRAMID
    for (int i = 1; i <= length; i++)
    {

        for (int s = 0; s < length - i; s++)
        {
            printf("  ");
        }

        // PRINT INCREASING CHARACTERS

        for (int j = 0; j < i; j++)
        {
            printf("%c ", str[j]);
        }

        // PRINT DECREASING CHARACTERS

        for (int j = i - 2; j >= 0; j--)
        {
            printf("%c ", str[j]);
        }

        printf("\n");
    }

    return 0;
}

