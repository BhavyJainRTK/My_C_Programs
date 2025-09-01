#include <stdio.h>

int x, y, a;

void exchange();
int main()
{
    printf("Enter the value in x and y > ");
    scanf("%d %d", &x, &y);

    exchange();

    printf("now x = %d , y = %d",x,y);
}

void exchange()
{
    a = x;
    x = y;
    y = a;
}