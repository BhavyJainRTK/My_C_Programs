#include <stdio.h>

int main()
{
    char first[10];
    char middle[10];
    char last[10];

    printf("ENTER FIRST NAME > ");
    scanf("%s",first);

    printf("ENTER MIDDLE NAME > ");
    scanf("%s",middle);

    printf("ENTER LAST NAME > ");
    scanf("%s",last);

    printf("(a) %s %c. %s\n",first,middle[0],last);
    printf("(b) %c.%c. %s\n",first[0],middle[0],last);
    printf("(c) %s %c.%c.\n",last,first[0],middle[0]);
}