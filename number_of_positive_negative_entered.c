#include<stdio.h>

int main()
{
    int num=1;
    int positive_num = 0,negative_num = 0;

    while (num != 0)
    {
        printf("enter number : ");
        scanf("%d",&num);

        if (num > 0)
        {
            positive_num = positive_num + 1;
        }

        if (num < 0)
        {
            negative_num = negative_num + 1;
        }
        if (num == 0)
        {
            printf("*** END *** \n");
        }
    }

    printf("number of positive numbers = %d\n",positive_num);
    printf("number of negative numbers = %d\n",negative_num);

}