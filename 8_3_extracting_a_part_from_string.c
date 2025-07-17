#include<stdio.h>
#include<string.h>

int main()
{
    // DECLEARING THE DTRING AND VARIABLES.

    char string1[20];
    char string2[19];
    int n;

    // TAKING INPUT FROM USER.

    printf("enter a string\n");
    printf("> ");
    fgets(string1,sizeof(string1),stdin);

    printf("how much string you want to print (size) > ");
    scanf("%d",&n);

    // COPYING THE STRING.

    strncpy(string2,string1,n);
    string2[n] = '\0';

    // DISPLAYING THE FINAL STRING.
    printf("now the string is %s",string2);
}