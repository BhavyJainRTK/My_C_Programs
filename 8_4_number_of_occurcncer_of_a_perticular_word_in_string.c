#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING AND VARIABLE.

    char string1[50];
    char string2[10];
    int count = 0;

    // TAKING INPUT FROM USER.

    printf("Enter a string > ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter the word you want to count of find > ");
    scanf("%s", string2);

    // BREAKING THE STRING.

    char *token = strtok(string1, " ");

    // FINDING THE WORD IN THE STRING.

    while (token != NULL)
    {
        if (strcmp(token, string2) == 0)
        {
            count++;
        }
        token = strtok(NULL, " ");
    }

    // PRINTING THE NUMBER OF OCCURENCE OF THE WIRD IN THE STRING.

    printf("\nTHE WORD [%s] COMES %d TIMES IN THE STRING", string2, count);
}