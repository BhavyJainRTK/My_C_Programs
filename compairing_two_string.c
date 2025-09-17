#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Compare character by character
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1; // mismatch found
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("YES: Strings are equal\n");
    else
        printf("NO: Strings are not equal\n");

    return 0;
}