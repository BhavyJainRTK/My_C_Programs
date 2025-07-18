#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING AND VARIABLE.

    char string[50];
    char word[10];
    char cword[10];
    char final_string[60] = "";
    int length;

    // TAKING INPUT FROM USER.

    printf("wnter the string > ");
    fgets(string, sizeof(string), stdin);

    printf("enter the word you want to replace feom > ");
    fgets(word, sizeof(word), stdin);

    printf("word you wnat to assign > ");
    fgets(cword, sizeof(cword), stdin);

    // ASSIGNING THE LAST SPATE TO '\0'.

    string[strcspn(string, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    cword[strcspn(cword, "\n")] = '\0';

    char *token;

    // BREAKING THE STRING FROM EACH SPACE.

    token = strtok(string, " ");

    while (token != NULL)
    {
        // FINDING THE WORD WICH WE WANT TO REMOVE.

        if (strcmp(token, word) == 0)
        {
            // CHANGING THE OLD WORD TO NEW WORD.

            strcat(final_string, cword);
        }
        else
        {
            strcat(final_string, token);
        }

        strcat(final_string, " ");
        token = strtok(NULL, " ");
    }

    length = strlen(final_string);

    // ASSIGNING THE LAST SPACE OF THE STRING TO '\0'.

    if (length > 0 && final_string[length - 1] == ' ')
    {
        final_string[length - 1] = '\0';
    }
    // PRINTING THE FINAL STRING.

    printf("\n%s", final_string);
}