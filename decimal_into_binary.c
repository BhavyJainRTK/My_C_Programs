#include<stdio.h>

int main()
{
    int num,i,j;
    int ans[32],x;

    printf("ENTER YOUR NUMBER > ");
    scanf("%d",&num);

    printf("%d IN BINARY > ",num);

    for ( i = 0; num > 0; i++)
    {
        x = num % 2;
        num = num / 2;
        ans[i] = x;
    }

    for ( j = i - 1; j >= 0 ; j = j - 1)
    {
        printf("%d ",ans[j]);
    }
}