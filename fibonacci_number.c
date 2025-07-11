#include<stdio.h>

int main()
{
    int num;
    int i=0;
    int b = 1;
    int sum,a = 0;
;

    printf("HOW MUCH NUMBER YOU WANT > ");
    scanf("%d",&num);

    do
    {
        sum = a + b;
        printf("%d ",sum);
        i++;
        a = b;
        b = sum;
    } while (i < num);
    
}