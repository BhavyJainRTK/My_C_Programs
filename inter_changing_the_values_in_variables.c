// inter changinf the values iof variables such tha x=y y=z z=x :

#include<stdio.h>

int main()
{
    int x,y,z,ex;

    printf("enter the value in x : ");
    scanf("%d",&x);
    ex = x;
    printf("enter the value in y : ");
    scanf("%d",&y);
    x = y;
    printf("enter the value in x : ");
    scanf("%d",&z);
    y = z;
    z = ex;
    
    printf("now value in x = %d, y = %d, z= %d",x,y,z);
}