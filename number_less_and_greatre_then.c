#include<stdio.h>

int main()
{
    int x;

    printf("enter a number : ");
    scanf("%d",&x);
    
    printf("not less than    %d     not greater than\n",x);
    printf("     %d                         %d",x-1,x+1);

}