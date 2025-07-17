#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // DECLEARING THE STRING.

    char correct_answer[6] = "earth";
    char user_answer[10];

    // TAKING INPUT FROM USER.

    printf("you have only three attempts\n");
    printf("What is name of our planet ?");
    for (int i = 0; i < 3; i++)
    {
        printf("\nANSWER > ");
        scanf("%s", user_answer);

        // CONVERTING THE USER STRING TO LOWER CASE.

        for (int i = 0; user_answer[i] != '\0'; i++)
        {
            user_answer[i] = tolower(user_answer[i]);
        }

        // COMPAIRING THE USER STRING TO MAIN STRING.

        if (strcmp(correct_answer, user_answer) == 0)
        {
            goto correct;
        }
        else
        {
            printf("\ntry again");
        }
    }

    // IF ANSWER WRONG.

    printf("\nThe correct answer is [Earth]");
    return 0;

    // IF ANSWER CORRECT.

correct:
    printf("\nGOOD");
    return 1;
}