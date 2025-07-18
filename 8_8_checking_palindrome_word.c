#include <stdio.h>
#include <string.h>

int main()
{
    // declearing the string.

    char word[10];
    int length;

    // taking input from user.

    printf("ENTER A WORD > ");
    scanf("%s", &word);

    length = strlen(word);

    // matching the word.

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            goto end;
        }
    }

    printf("\nthe word is palindrome");
    return 0;

end:
    printf("\nthe word is not palindrome");
}