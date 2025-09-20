#include<stdio.h>
#include<string.h>

int number,temp;

// creating datatype

struct date
{
    int date;
    int month;
    int year;
    char f_month[20];
};

// converting number into date month and year

void saving(struct date *d)
{
    d->year = number/10000;
    temp = number%1000;
    d->month = temp/100;
    d->date = temp%100;
}

void display(struct date *d)
{
    // giving month name

    if (d->month == 1) strcpy(d->f_month, "January");
    else if (d->month == 2) strcpy(d->f_month, "February");
    else if (d->month == 3) strcpy(d->f_month, "March");
    else if (d->month == 4) strcpy(d->f_month, "April");
    else if (d->month == 5) strcpy(d->f_month, "May");
    else if (d->month == 6) strcpy(d->f_month, "June");
    else if (d->month == 7) strcpy(d->f_month, "July");
    else if (d->month == 8) strcpy(d->f_month, "August");
    else if (d->month == 9) strcpy(d->f_month, "September");
    else if (d->month == 10) strcpy(d->f_month, "October");
    else if (d->month == 11) strcpy(d->f_month, "November");
    else if (d->month == 12) strcpy(d->f_month, "December");
    else strcpy(d->f_month, "Invalid");

    printf("%s %02d, %d\n",d->f_month,d->date, d->year);
}

int main()
{
    printf("enter date YYYYMMDD > ");
    scanf("%d",&number);

    struct date first;

    saving(&first);
    display(&first);
}