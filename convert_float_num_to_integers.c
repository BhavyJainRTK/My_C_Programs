#include<stdio.h>

int main()
{
    float num[4];
    int i;

    printf("YOU HAVE TO ENTER [4] NUMBERS\n");

    for ( i = 0; i < 4; i++)
    {
        printf("enter [%d] number > ",i+1);
        scanf("%f",&num[i]);
    }
    
    for ( i = 0; i < 4; i++)
    {
        printf("1. %.2f > %.0f\n",num[i],num[i]);
    }

}