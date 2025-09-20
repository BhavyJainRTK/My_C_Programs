#include <stdio.h>

struct time_struct   // creatinf a structure
{
    // variables for time 

    int hour;
    int min;
    int sec;
};

int main()
{
    struct time_struct first;

    printf("enter the details > ");

    // taking input from user 

    scanf("%d %d %d",&first.hour,&first.min,&first.sec);

    // print the result
    
    printf("\n%d:%d:%d",first.hour,first.min,first.sec);
}
