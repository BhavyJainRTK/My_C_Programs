#include<stdio.h>

int main()
{
    float temp[31][10];
    int i,j;
    int day1 =0,day2=0,city1=0,city2=0;

    for ( j = 0; j < 10; j++)
    {
        printf("CITY NO. [%d]\n",j+1);

        for ( i = 0; i < 31; i++)
        {
            printf("TEMPERATURE AT DAY [%d] > ",i+1);
            scanf("%f",&temp[i][j]);
        }
    }

    float max = temp[0][0];
    float min = temp[0][0];

    for ( j = 0; j < 10; j++)
    {
        for ( i = 0; i < 31; i++)
        {
            if(temp[i][j] > max)
            {
                max = temp[i][j];
                day1 = i;
                city1 = j;
            }
            if(temp[i][j] < min)
            {
                min = temp[i][j];
                day2 = i;
                city2 = j;
            }
        }
    }
    printf("ON DAY [%d] IN CITY [%d] HIGHEST TEMPERATURE IS > %f\n",day1+1,city1+1,max);
    printf("ON DAY [%d] IN CITY [%d] LOWEST TEMPERATURE IS > %f\n",day2+1,city2+1,min);
}