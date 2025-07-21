#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING AND VARIABLE.

    char string1[50];
    char string2[50];
    int n;

    // TAKING INPUT FROM USER.

    printf("ENTER THE STRING > ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("HOW MUCH CHARACTERS YOU WANT TO COPY > ");
    scanf("%d", &n);

    // COPYING THE STRING TO THE N CHARACTERS.

    strncpy(string2, string1, n);
    string2[n] = '\0';

    // PRINTING THE FINAL STRING.

    printf("THE STRING BECOMES > %s", string2);
}