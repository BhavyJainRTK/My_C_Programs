#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float n1,n2;

    printf("_______________________________\n");
    printf("%-10s %-10s    %-15s\n","NUMBER","SQUAREROOT","SQUARE");

    for ( i = 0; i < 101; i++)
    {
        printf(" %-12d %-10.2f %-15d \n",i,sqrt(i),(i*i));
    }
    printf("_______________________________\n");
}