#include<stdio.h>

int leap(int year);
void calender(int year);

int year;

int main()
{
    calender(year);
}

int leap(int year)
{
    printf("Enter the year > ");
    scanf("%d",&year);

    if ((year%4) == 0)
    {
        printf("it's a leap year\n");
    }
    else
    {
        printf("it's not a leap year\n");
    }
}

void calender(int year)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *months[100] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    if (leap(year) == 0)
    {
        days[1] = 29;
    }

    for (int i = 0; i < 12 ; i++)
    {
        printf("%-12s > %d\n",months[i],days[i]);
    }
}