#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][10];
    int roll[10], temp_roll;
    int marks[10], temp_marks;
    char temp[10];
    int n;

    printf("how many student name you want to enter > ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ROLL NO. OF {%d} STUDENT > ", i);
        scanf("%d", &roll[i]);

        printf("ENTER THE NAME OF {%d} STUDENT > ", i);
        scanf("%s", &name[i]);

        printf("ENTER MARKS OF {%d} STUDENT > ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);

                temp_roll = roll[i];
                roll[i] = roll[j];
                roll[j] = temp_roll;

                temp_marks = marks[i];
                marks[i] = marks[j];
                marks[j] = temp_marks;
            }
        }
    }

    printf("\n");
    printf("\n%-15s %-15s %-15s\n", "Roll No.", "Name", "Marks");
    for (int i = 0; i < n; i++)
    {
        printf("%-15d %-15s %-15d\n", roll[i], name[i], marks[i]);
    }
}