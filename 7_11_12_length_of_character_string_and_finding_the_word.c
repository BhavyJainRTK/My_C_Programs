#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE VARIABLES AND STRING.

    char sentence[100];
    int i;
    char *token;
    char word[50];

    // TAKING INPUT FROM USER.

    printf("ENTER A SENTENCE > ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    // GIVE LENGTH OF THE STRING.

    printf("length of string is %d\n", strlen(sentence));

    printf("ENTER THE WORD YOU WANT TO FIND IN THE SENTENCE > ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    // SPLITING THE SENTENCE FROM EVERY SPACE.

    token = strtok(sentence, " ");

    // MACHING THE WIRD.

    while (token != NULL)
    {
        if (strcmp(token, word) == 0)
        {
            goto yes;
        }

        token = strtok(NULL, " ");
    }
    printf("THE WORD %s NOT FOUND", word);
    return 0;

yes:
    printf("THE WORD %s FOUNT IN THE SENTENCE", word);
    return 1;
}