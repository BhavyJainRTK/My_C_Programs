#include <stdio.h>
#include <string.h>

void string_enter(char s[100]);
void string_copy(char s[100], char x[100]);
void join_string(char s[100], char x[100]);
void print_string(char s[100]);

int main()
{
    char string1[100], string[100];

    string_enter(string1);
    string_copy(string1, string);
    join_string(string1, string);
    print_string(string1);
}

void string_enter(char s[100])
{
    printf("Enter a string > ");
    fgets(s, 100, stdin);

    if (strlen(s) > 0 && s[strlen(s) - 1] == '\n')
    {
        s[strlen(s) - 1] = '\0';
    }
}

void string_copy(char s[100], char x[100])
{
    strcpy(x, s);
}

void join_string(char s[100], char x[100])
{
    strcat(s, x);
}

void print_string(char s[100])
{
    printf("> %s", s);
}