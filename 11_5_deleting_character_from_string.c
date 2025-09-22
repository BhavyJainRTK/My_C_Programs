#include <stdio.h>
#include <string.h>

// input from user

void input(char *string, char *word, int size)
{
    printf("Enter a string > ");
    fgets(string, size, stdin);

    printf("Enter the character you want to delete > ");
    scanf(" %c", word); 
}

// deleting character

void delete_char(char *string, char word)
{
    char *p = string; // shifting characters
    while (*p != '\0')
    {
        if (*p == word)
        {
            char *q = p;

            while (*q != '\0')
            {
                *q = *(q + 1);
                q++;
            }
        }
        else
        {
            p++;
        }
    }
}

int main()
{
    char sentence[100];
    char word;

    // calling functions
    
    input(sentence, &word, sizeof(sentence));
    delete_char(sentence, word);

    printf("String after deletion: %s\n", sentence);

    return 0;
}
