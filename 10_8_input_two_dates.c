#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct date
{
    int date;
    char month[20];
    int year;
    int month_n;
};

// Convert month name to number

int month_name_to_number(char month[])
{
    if (strcmp(month, "january") == 0)
        return 1;
    if (strcmp(month, "february") == 0)
        return 2;
    if (strcmp(month, "march") == 0)
        return 3;
    if (strcmp(month, "april") == 0)
        return 4;
    if (strcmp(month, "may") == 0)
        return 5;
    if (strcmp(month, "june") == 0)
        return 6;
    if (strcmp(month, "july") == 0)
        return 7;
    if (strcmp(month, "august") == 0)
        return 8;
    if (strcmp(month, "september") == 0)
        return 9;
    if (strcmp(month, "october") == 0)
        return 10;
    if (strcmp(month, "november") == 0)
        return 11;
    if (strcmp(month, "december") == 0)
        return 12;
    return 0;
}

// Input date from user

void inputdate(struct date *d)
{
    printf("Enter the details > ");
    scanf("%d %s %d", &d->date, d->month, &d->year);

    // Convert month to lowercase

    for (int i = 0; d->month[i]; i++)
        d->month[i] = tolower(d->month[i]);

    d->month_n = month_name_to_number(d->month);
}

// Check validity of the date

void check(struct date d)
{
    int max_day = 31;

    if (d.month_n == 2) // February
    {
        if (d.year % 4 == 0)
            max_day = 29;
        else
            max_day = 28;
    }
    else if (d.month_n == 4 || d.month_n == 6 || d.month_n == 9 || d.month_n == 11)
    {
        max_day = 30;
    }

    if (d.date < 1 || d.date > max_day)
    {
        printf("Invalid date\n");
        exit(0);
    }
}

// Display date

void display(struct date d)
{
    printf("%2d, %2d, %d\n", d.date, d.month_n, d.year);
}

int compare(struct date d ,struct date t)
{
    if (d.year > t.year) // comparing years
    {
        if (d.month_n > t.month_n) // comparing month
        {
            printf("\nDate1 is later.");
        }
        else if (d.month_n == t.month_n)
        {
            if (d.date > t.date) // comparing date.
            {
                printf("\nDate1 is later.");
            }
            else if (d.date == t.date)
            {
                printf("\nDates are same.");
            }
            else
            {
                printf("\nDate1 is earlier.");
            } 
        }
        else
        {
            printf("\nDate1 is earlier.");
        }
    }
    else
    {
        printf("\nDate1 is earlier.");
    }
}

// Increment date

int main()
{
    struct date date1;
    inputdate(&date1);
    check(date1);

    struct date date2;
    inputdate(&date2);
    check(date1);

    display(date1);
    display(date2);

    compare(date1,date2);

    return 0;
}
