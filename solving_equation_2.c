/*   (a)  (x+y)/(x-y)  ,  (b)  (x+y)/2  ,  (c)  (x+y)(x-y)     */

#include<stdio.h>

int main()
{
    int x,y,a,s;
    printf("enter the value os X : ");
    scanf("%d",&x);

    printf("enter the value os Y : ");
    scanf("%d",&y);

    a = x+y;
    s = x-y;

    printf("(a)  (x+y)/(x-y) for x = %d and y = %d is [%d]\n",x,y,a/s);
    printf("(b)  (x+y)/2 for x = %d and y = %d is [%d]\n",x,y,a/2);
    printf("(c)  (x+y)(x-y) for x = %d and y = %d is [%d]",x,y,a*y);
}