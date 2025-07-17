#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char correct_answer[6] = "earth";
    char user_answer[10];


    printf("What is name of our planet ?");
    for ( int i = 0; i < 3; i++)
    {
        printf("\nANSWER > ");
        scanf("%s",user_answer);

        
        for (int i = 0; user_answer[i] != '\0'; i++)
        {
            user_answer[i]= tolower(user_answer[i]);
        }
        
        if (strcmp(correct_answer,user_answer) == 0)
        {
            goto correct;
        }
        else
        {
            printf("\ntry again");
        }
    }

    printf("\nThe correct answer is [Earth]");
    return 0;

    correct :
    printf("\nGOOD");
    return 1;
}