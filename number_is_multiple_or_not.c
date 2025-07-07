#include<stdio.h>

int main()
{
    int m,n;

    printf("enter m : ");
    scanf("%d",&m);

    printf("enter n : ");
    scanf("%d",&n);

    if (m % n == 0)
    {
        printf("%d is a multiple of %d",m,n);
    }
    
}