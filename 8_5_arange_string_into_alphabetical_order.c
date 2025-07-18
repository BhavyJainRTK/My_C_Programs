#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING.

    char string[20];
    int length, low, x;

    // TAKING INPUTB FROM USER.

    printf("ENTER A WORD > ");
    fgets(string, sizeof(string), stdin);

    // ASSIGNING '\0' AT LAST BLOCK.

    length = strlen(string);
    if (string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
        length--;
    }

    // (SOATING) COMPAITING THE ALPHABET IN THE STRING.

    for (int i = 0; i < length - 1; i++)
    {
        low = i;

        for (int j = i + 1; j < length; j++)
        {

            if (string[j] < string[low])
            {
                low = j;
            }
        }

        // SWAPING THE ALPHABETS.

        char temp = string[low];
        string[low] = string[i];
        string[i] = temp;
    }

    // PRINTING THE FINAL STRIG.

    printf("%s", string);
}