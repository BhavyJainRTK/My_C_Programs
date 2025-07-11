#include<stdio.h>

int main()
{
    int l_range,h_range;
    int i,sum = 0; 
    
    printf("ENTER THE LOWER RANGE > ");
    scanf("%d",&l_range);

    printf("ENTER THE HIGHEST RANGE > ");
    scanf("%d",&h_range);
    
    for ( i = l_range; i < h_range; i++)
    {
        if (i%6 == 0)
        {
            if (i%4 != 0)
            {
                sum = sum + i;
                printf("%d  ",i);
            }
            
        }
        
    }
    
    printf("\nSUM OF THESE NUMBER > %d",sum);

}