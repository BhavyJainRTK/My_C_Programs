#include<stdio.h>

int main()
{
    int numbers[10],n;
    int max = 0;

    printf("HOW MUCH NUBMER YOU WANT TO ENTER > ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }
    
    printf("%d",max);
}