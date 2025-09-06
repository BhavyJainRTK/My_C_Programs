#include <stdio.h>
#include <string.h>

void input_string(char s1[100], char s2[100], int *n);
void string_copy(char s1[100], char s2[100], int n);

int main()
{
    char string1[100], string2[100];
    int m;

    input_string(string1, string2, &m);
    string_copy(string1, string2, m);

    printf("%s", string1);
}

void input_string(char s1[100], char s2[100], int *n)
{
    printf("Enter the first string > ");
    fgets(s1, 100, stdin);

    if (s1[strlen(s1) - 1] == '\n')
    {
        s1[strlen(s1) - 1] = '\0';
    }

    printf("Enter the first string > ");
    fgets(s2, 100, stdin);

    if (s2[strlen(s2) - 1] == '\n')
    {
        s2[strlen(s2) - 1] = '\0';
    }

    printf("Enter the index from where you want to copy string > ");
    scanf("%d", n);
}

void string_copy(char s1[100], char s2[100], int n)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[n + i] = s2[i];
        i++;
    }

    s1[n + i] = '\0';
}
