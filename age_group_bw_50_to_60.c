#include<stdio.h>

int main()
{
    int age[100];
    int i,sum=0;
    
    for ( i = 0; i < 10; i++)
    {
        printf("ENTER AGE > ");
        scanf("%d",&age[i]);
    }

    for ( i = 0; i < 100; i++)
    {
        if (age[i] >= 50 && age[i] <= 60)
        {
            sum = sum +1;
        }
        
    }
    printf("PEOPLE BETWEEN 50 AND 60 > %d",sum);
    
    
    
}