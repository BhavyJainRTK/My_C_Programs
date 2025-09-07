#include<stdio.h>

int leap(int n);

int main()
{
    int year;
    
    if (leap(year) == 0)
    {
        printf("it's a leap year");
    }
    else
    {
        printf("it's not leap year");
    }
}

int leap(int n)
{
    printf("Enter the year > ");
    scanf("%d",&n);

    if ((n%4) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}