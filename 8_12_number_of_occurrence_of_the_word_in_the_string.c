#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING AND VARIABLE.

    char string[100];
    char word[10];
    char *token;
    int count = 0;

    // TAKING INPUT FROM USER.

    printf("WRITE THE STRING > ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("WRITE THE WORD > ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    // BREAKING THE STRING.

    token = strtok(string, " ");

    // FINDING THE WORD IN THE STRING.

    while (token != 0)
    {
        if (strstr(token, word) != NULL)
        {
            count = count + 1;
        }
        token = strtok(NULL, " ");
    }

    // PRINTING THE NUMBER OF OCCURENCE OF THE WIRD IN THE STRING.

    printf("the word {%s} comes %d times in the string", word, count);
}