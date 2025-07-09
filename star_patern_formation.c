#include<stdio.h>
#include<math.h>
int main()
{
    float num[4];
    int intg[4];
    int decm[4];
    int i,x,j;

    printf("YOU HAVE TO ENTER [4] FLOATING NUMBERS\n");

    for ( i = 0; i < 4; i++)
    {
        printf("enter [%d] number > ",i+1);
        scanf("%f",&num[i]);

        intg[i] = (int)num[i];
        decm[i] = (int)round((num[i]-intg[i])*10);

    }

    for (i = 0; i < 4; i++) 
    {   
        printf("%.2f\n",num[i]);
        for (int x = 0; x < decm[i]; x++) 
        {   
            for (j = 0; j < intg[i]; j++) 
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}