#include<stdio.h>

int main()
{
    char name[10][10];
    int code[10];
    int n,i;
    float prise[10];

    printf("how much item you want to enter > ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("enter item name > ");
        scanf("%s",&name[i]);

        printf("enter the code > ");
        scanf("%d",&code[i]);

        printf("enter the prise > ");
        scanf("%f",&prise[i]);
    }

    printf("NAME        CODE        PRICE\n");
    for ( i = 0; i < n; i++)
    {
        printf("%-12s %-10d %-10.2f\n",name[i],code[i],prise[i]);
    }  
}