#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING AND VERIABLE.

    char string1[30];
    char string2[30];
    int n;
    
    // TAKING INPUT FROM USER.

    printf("WNTER THE FIRST STRING > ");
    fgets(string1, sizeof(string1), stdin);

    printf("WNTER THE SECOND STRING > ");
    fgets(string2, sizeof(string2), stdin);

    printf("HOW MUCH CHARACTERS YOU WANT TO COMPARE > ");
    scanf("%d", &n);

    // COMPAREING THE BOTH STRING.
    
    if (strncmp(string2, string1, n) == 0)
    {
        printf("string1 is equal to string2");
    }
    else if (strncmp(string2, string1, n) < 0)
    {
        printf("string1 is less then string2");
    }
    else if (strncmp(string2, string1, n) > 0)
    {
        printf("string1 is greater then string2");
    }
}