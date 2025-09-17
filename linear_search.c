#include<stdio.h>
#include<conio.h>

int main()
{
    int n,find,number[100];

    printf("how much number you want to enter > ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }

    printf("enter the number you want to find > ");
    scanf("%d",&find);

    for (int i = 0; i < n; i++)
    {
        if (number[i] == find)
        {
            printf("number = %d , inderx = %d",number[i],i);
        }
    }
}