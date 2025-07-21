#include <stdio.h>
#include <string.h>

int main()
{
    // declearing the string and variable.

    char name[10][10];
    int roll[10], temp_roll;
    int marks[10], temp_marks;
    char temp[10];
    int n;

    // taking input from user.

    printf("how many student name you want to enter > ");
    scanf("%d", &n);

    // saveing the data from user in string using loop.

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ROLL NO. OF {%d} STUDENT > ", i+1);
        scanf("%d", &roll[i]);

        printf("ENTER THE NAME OF {%d} STUDENT > ", i+1);
        scanf("%s", &name[i]);

        printf("ENTER MARKS OF {%d} STUDENT > ", i+1);
        scanf("%d", &marks[i]);
    }

    // soating and swaping the names using loop.

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (roll[i] > roll[j])
            {
                
                // swaping roll numbers.

                temp_roll = roll[i];
                roll[i] = roll[j];
                roll[j] = temp_roll;

                // swaping name.

                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);

                // swaping marks.

                temp_marks = marks[i];
                marks[i] = marks[j];
                marks[j] = temp_marks;
            }
        }
    }

    // displaying the table.
    
    printf("\n");
    printf("\n%-15s %-15s %-15s\n", "Roll No.", "Name", "Marks");
    for (int i = 0; i < n; i++)
    {
        printf("%-15d %-15s %-15d\n", roll[i], name[i], marks[i]);
    }
}