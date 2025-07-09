#include<stdio.h>
#include<string.h>

int main()
{
    char word[20];
    char a1[5];
    char a2[10];

    printf("enter a word (WORDPROCESSING) : ");
    scanf("%s",word);
    
    strncpy(a1,word,4);
    
    strcpy(a2,word+4);

    printf("> %s %s\n",a1,a2);
    printf("> %s\n  %s\n",a1,a2);
    printf("> %c.%c.",a1[0],a2[0]);
}