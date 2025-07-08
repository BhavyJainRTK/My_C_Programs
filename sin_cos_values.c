#include<stdio.h>
#include<math.h>

int main()
{
    float n;
    int angle[50];
    int num,i;

    printf("how many angle will you enter");
    scanf("%d",&num);
    
    for (i = 0; i < num; i++)
    {
        printf("enter the angle : ");
        scanf("%d",&angle[i]);
    
    }
    
    printf("________________________________");
    printf("|  ANGLES  |  SIN X  |  COS X  |\n");

    for ( i = 0; i < num; i++)
    {
        n = angle[i] * 0.017453;
    printf("|    %d    |   %.2f  |  %.2f   |\n",angle[i], sin(n),cos(n));
    }

    printf("|__________|_________|_________|");
}                