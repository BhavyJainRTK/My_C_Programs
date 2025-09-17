#include<stdio.h>
#include<conio.h>

int main()
{
    int n,find,number[100];
    int found,low,mid,high;

    printf("how much number you want to enter > ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }

    printf("enter the number you want to find > ");
    scanf("%d",&find);

    found = 0;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (mid == find)
        {
            printf("found number at %d",mid+1);
            break;
        }
        else if (find < mid)
        {
            high = mid-1;
        }
        else
        low = mid+1;
    }
    

}