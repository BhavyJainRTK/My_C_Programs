#include<stdio.h>

int main()
{
    int x=100,y=200,i,sum=0;
    
    printf("NUMBERS >");
    for ( i = 100 ; i < y; i++)
    {
        if ((i%7) == 0)
        {
            printf(" %d,",i);
            sum = sum + i;
        }
        
    }
    printf("\nSUM > %d",sum);
}