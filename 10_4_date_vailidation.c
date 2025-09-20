#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct date
{
    int date;
    char month[20];
    int year;
    int check;
    int month_n;
};

void inputdate(struct date *d)
{
    // taking input from user

    printf("enter the details > ");
    scanf("%d %s %d", &d->date, &d->month, &d->year);

    for (int i = 0; d->month[i] != '\0'; i++)
    {
        d->month[i] = tolower(d->month[i]);
    } 
}

void check(struct date d)
{

    if (strcmp(d.month, "january") == 0 || strcmp(d.month, "march") == 0 ||
        strcmp(d.month, "may") == 0 || strcmp(d.month, "july") == 0 ||
        strcmp(d.month, "august") == 0 || strcmp(d.month, "october") == 0 ||
        strcmp(d.month, "december") == 0)
    {
        if (d.date > 31 || d.date < 1)
        {
            printf("\nDate is invalid");
            exit(0);
        }
    }

    else if (strcmp(d.month, "april") == 0 || strcmp(d.month, "june") == 0 ||
             strcmp(d.month, "september") == 0 || strcmp(d.month, "november") == 0)
    {
        if (d.date > 30 || d.date < 1)
        {
            printf("\nDate is invalid");
            exit(0);
        }
    }

    else if (strcmp(d.month, "february") == 0)
    {

        if (d.year%4 == 0)
        {
            if (d.date > 29 || d.date < 0)
            {
                printf("\ndate is invalid");
                exit(0);
            }
        }
        else if (d.year%4 != 0)
        {
            if (d.date > 28 || d.date < 0)
            {
                printf("\nyear is not leapyear (date is invalid)");
                exit(0);
            }
        }
    }
}

void display(struct date d)
{
    if (strcmp(d.month, "january") == 0)
    d.month_n = 1;
    else if (strcmp(d.month, "february") == 0)
    d.month_n = 2;
    else if (strcmp(d.month, "march") == 0)
    d.month_n = 3;
    else if (strcmp(d.month, "april") == 0)
    d.month_n = 4;
    else if (strcmp(d.month, "may") == 0)
    d.month_n = 5;
    else if (strcmp(d.month, "june") == 0)
    d.month_n = 6;
    else if (strcmp(d.month, "july") == 0)
    d.month_n = 7;
    else if (strcmp(d.month, "august") == 0)
    d.month_n = 8;
    else if (strcmp(d.month, "september") == 0)
    d.month_n = 9;
    else if (strcmp(d.month, "october") == 0)
    d.month_n = 10;
    else if (strcmp(d.month, "november") == 0) 
    d.month_n = 11;
    else if (strcmp(d.month, "december") == 0)
    d.month_n = 12;

    printf("%d, %d, %d", d.date, d.month_n, d.year);
}

int main()
{
    struct date first;
    inputdate(&first);
    check(first);
    display(first);
}