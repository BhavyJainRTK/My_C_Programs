#include<stdio.h>

int main()
{
    int n;
    float r,p,c;

    printf("ENTER THE FOLLOWING DETAILS\n");
    printf("ENTER THE COST OF THE ITEM > ");
    scanf("%f",&c);

    printf("ENTER THE DEPRECIATION RATE > ");
    scanf("%f",&r);

    printf("HOW OLD IS ITEM (YEAR) > ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        c = c - (c * r);
        p = c;
    }
    printf("NOW PRISE OF THE ITEM > %.2f",p);
    
    
}