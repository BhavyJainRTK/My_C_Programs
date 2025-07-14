#include <stdio.h>

int main()
{
    // DECLEARING THE VARIABLES

    float student[10][5];
    int n;
    float sum = 0;
    float maxnum1 = 0, maxnum2 = 0, maxnum3 = 0, maxtotal = 0;
    float student1, student2, student3, studenttoper;
    ;

    printf("HOW MANY STUDENT YOU WANT TO ENTER > ");
    scanf("%d", &n);

    // SAVING ROLL NO. AND MARKS.

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        int j = 0;

        printf("ENTER THE STUDENT ROLL NO. > ");
        scanf("%f", &student[i][j]);

        for (j = 1; j < 5; j++)
        {
            if (j == 4)
            {
                student[i][j] = sum;
            }
            else
            {
                printf("MARKS IN [%d] SUNBJECT > ", j);
                scanf("%f", &student[i][j]);
                sum = sum + student[i][j]; // SAVEING SUM OF MARKS
            }
        }
    }

    // NOW PRINTING THE TABLE

    printf("ROLL NO.    SUBJECT 1    SUBJECT 2   SUBJECT 3\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %5.2f      ", student[i][j]);
        }
        printf("\n");
    }

    // FINING MAXIMUM MARKS AND STUDENT NAME
    // SUBJECT 1.

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        if (student[i][1] > maxnum1)
        {
            maxnum1 = student[i][1];
            student1 = student[i][0];
        }
    }

    // SUBJECT 2.

    for (int i = 0; i < n; i++)
    {
        if (student[i][2] > maxnum2)
        {
            maxnum2 = student[i][2];
            student2 = student[i][0];
        }
    }

    // SUBJECT 3.

    for (int i = 0; i < n; i++)
    {
        if (student[i][3] > maxnum3)
        {
            maxnum3 = student[i][3];
            student3 = student[i][0];
        }
    }

    // FINING MAXIMUM MARKS IN TOTAL AND STUDENT NAME

    for (int i = 0; i < n; i++)
    {
        if (student[i][4] > maxtotal)
        {
            maxtotal = student[i][4];
            studenttoper = student[i][0];
        }
    }

    // PRINTING THE STUDENTS NAME WHO GOT MAXIMUM MARKS IN EACH SUBJECTS.

    printf("%.0f got highest %.2f marks in subject 1\n", student1, maxnum1);
    printf("%.0f got highest %.2f marks in subject 2\n", student2, maxnum2);
    printf("%.0f got highest %.2f marks in subject 3\n", student3, maxnum3);
    printf("%.0f was the topper of the class with total %.2f marks\n", studenttoper, maxtotal);
}