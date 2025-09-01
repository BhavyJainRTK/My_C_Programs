#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppercase(char n[0]);
int main()
{
    char string[100];

    printf("Enter a string in lower case letters > ");
    fgets(string, sizeof(string), stdin);

    uppercase(string);

    printf("uppler case > %s", string);
}

void uppercase(char n[0])
{
    for (int i = 0; i < strlen(n); i++)
    {
        n[i] = toupper(n[i]);
    }
}