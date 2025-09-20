#include <stdio.h>

struct time_struct   // creatinf a structure
{
    // variables for time 

    int hour;
    int min;
    int sec;
};

void inputtime(struct time_struct *t)
{
    // taking input from user 

    printf("enter the details > ");
    scanf("%d %d %d", &t->hour, &t->min, &t->sec);
}

void tick(struct time_struct *t)
{
    t->sec++;
    if (t->sec == 60)
    {
        t->sec = 0;
        t->min++;
    }
    if (t->min == 60)
    {
        t->min = 0;
        t->hour++;
    }
    if (t->hour == 24)
    {
        t->hour = 0;
    }
}

void outputtime(struct time_struct t)
{
    // print the result
    
    printf("\n%d:%d:%d",t.hour,t.min,t.sec);
    fflush(stdout);
}
int main()
{
    struct time_struct clock;

    inputtime(&clock);

    while (1)
    {
        outputtime(clock);
        tick(&clock);

        for (long i = 0; i < 300000000; i++);
    }
    
}