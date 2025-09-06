#include<stdio.h>

void input_array(char a[100], char *w);
int find(char a[100], char w);

int main()
{
    char array[100],word;

    input_array(array,&word);

    if (find(array,word) == 1)
    {
        printf("found");
    }
    else{
        printf("not found");
    }
    
}

void input_array(char a[100], char *w)
{
    printf("Enter a character of array > ");
    scanf("%s",a);

    printf("Enter the character yuo want to find > ");
    scanf(" %c",w);
}

int find(char a[100], char w)
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == w)
        {
            return 1;
        }
    }
    return 0;
}