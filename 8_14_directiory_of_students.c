#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE STRING AND VARIABLES
    int roll[10];
    char name[10][10];
    int marks[10];
    int n, froll;

    printf("how many student name you want to enter > ");
    scanf("%d", &n);

    // SAVEING THE DATA FROM USER IN STRING USING LOOP.

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ROLL NO. OF {%d} STUDENT > ", i + 1);
        scanf("%d", &roll[i]);

        printf("ENTER THE NAME OF {%d} STUDENT > ", i + 1);
        scanf("%s", &name[i]);

        printf("ENTER MARKS OF {%d} STUDENT > ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("THE DATA OF WHICH STUDENT YOU WANT TO FIND\n");
    printf("ENTER THE ROLL NUMBER > ");
    scanf("%d", &froll);

    // FINDING THE ROLL NUMBER FROM THE LIST.

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == froll)
        {
            // DISPLAYING THE RESULT.
            
            printf("ROLL NUMBER > %d\n", roll[i]);
            printf("NAME > %s\n", name[i]);
            printf("marks > %d", marks[i]);
        }
    }
}