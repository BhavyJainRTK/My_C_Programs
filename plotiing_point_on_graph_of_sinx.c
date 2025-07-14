#include<stdio.h>
#include<math.h>

int main()
{
    float angle = 0.0,radiant,ans;
    int a,i;

    for ( i = angle; i < 181; i = i + 15)
    {
        printf("%3d|",i);
        
        radiant = i * ( M_PI / 180);
        ans = sin(radiant);
        float value = ans;
        ans = ans * 31;
        
        for ( int j = 0; j < ans; j++)
        {
            printf("  ");
        }
        printf("*[%.2f]",value); 
        printf("\n");

    }
    
    printf(" X^|");
    for ( float k = 0; k < 1; k = k + 0.03)
    {
        printf("__");
    }
}