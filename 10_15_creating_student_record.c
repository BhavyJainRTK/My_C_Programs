#include <stdio.h>

// global variable

int n;

// creating datatype

struct student_record
{
    char name[20][20];
    int day[20];
    char month[20][20];
    int year[20];
    int marks[20];

    char temp_name[20];
    int temp_day;
    char temp_month[20];
    int temp_year;
    int temp_marks;
};

// input from user

void input(struct student_record *first)
{
    printf("Enter student details");

    for (int i = 0; i < n; i++)
    {
        printf("student (%d) Name > ", i + 1);
        scanf("%s", first->name[i]);

        printf("Enter date of birth");
        printf("Date > ");
        scanf("%d", &first->day[i]);

        printf("Month (in words) > ");
        scanf("%s", first->month[i]);

        printf("Year > ");
        scanf("%d", &first->year[i]);

        printf("Marks > ");
        scanf("%d",&first->marks[i]);
    }
}

void marks_sort(struct student_record *first)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (first->marks[i] > first->marks[j])
            {
                strcpy(first->temp_name, first->name[i]);
                first->temp_day = first->day[i];
                strcpy(first->temp_month, first->month[i]);
                first->temp_year = first->year[i];
                first->temp_marks = first->marks[i];

                strcpy(first->name[i], first->name[j]);
                first->day[i] = first->day[j];
                strcpy(first->month[i], first->month[j]);
                first->year[i] = first->year[j];
                first->marks[i] = first->marks[j];

                strcpy(first->name[j], first->temp_name);
                first->day[j] = first->temp_day;
                strcpy(first->month[j], first->temp_month);
                first->year[j] = first->temp_year;
                first->marks[j] = first->temp_marks;
            }
        }
    }
}

int display(struct student_record first)
{
    printf("\n%-20s %-15s %-15s", "name", "date of birth", "marks");
    for (int i = n-1; i >= 0; i--)
    {
        printf("\n%-20s  %-15d-%s-%d  %-15d", first.name[i], first.day[i], first.month[i], first.year[i],first.marks[i]);
    }
}

int main()
{
    struct student_record first;

    printf("How many student you want to enter > ");
    scanf("%d",&n);

    input(&first);
    marks_sort(&first);
    display(first);
 
}