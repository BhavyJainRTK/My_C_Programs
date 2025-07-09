#include<stdio.h>

int main()
{
    float num1,num2,num3,num4;
    int i,j;

    printf("YOU HAVE TO ENTER [4] NUMBERS\n");

    printf("enter 1st number > ");
    scanf("%f",&num1);

    printf("enter 2nd number > ");
    scanf("%f",&num2);

    printf("enter 3rd number > ");
    scanf("%f",&num3);

    printf("enter 4th number > ");
    scanf("%f",&num4);

    printf("1. %.2f > %.0f\n",num1,num1);
    printf("2. %.2f > %.0f\n",num2,num2);
    printf("3. %.2f > %.0f\n",num3,num3);
    printf("4. %.2f > %.0f\n",num4,num4);
    
}