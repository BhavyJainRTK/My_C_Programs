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

void outputtime(struct time_struct t)
{
    // print the result
    
    printf("\n%d:%d:%d",t.hour,t.min,t.sec);
}
int main()
{
    struct time_struct first;    
    inputtime(&first);
    outputtime(first);
}
