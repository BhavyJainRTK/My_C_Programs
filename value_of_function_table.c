#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,i;
    int sum=0;
    
    printf("   ");
    for (x = 0; x <=1.0; x = x + 0.10)
    {   
        printf("%7.1f   ",x);
    }
    printf("\n");
    printf("0.0  ");
    
    for ( x = 0.0; x < 10 ; x = x + 0.10)
    {
        y = exp(-x);
        printf("%5.5f   ",y);

        sum = sum + 1;
        
        if (sum == 10)
        {
            printf("\n");
            printf("%.1f  ",x+.1);
            sum = 0;
        }
        
    }
    
}