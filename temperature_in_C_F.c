// Relationship between celsius and fahrenheit :

#include<stdio.h>

int main()
{
    int unit,b,c;
    float input_temp,output_temp;
    printf("in which unit you want to convert\n");
    printf("1> celsisus. \n2> fahrenhwit.\n");
    scanf("%d",&unit);

    switch (unit)
    {
    case 1:
        printf("enter the temperature in fahrenheit : ");
        scanf("%f",&input_temp);
        output_temp = ((input_temp - 32) * 5) / 9;
        printf("%f C",output_temp);
        break;

    case 2:
        printf("enter the temperature in celsius : ");
        scanf("%f",&input_temp);
        output_temp = ((input_temp *9) / 5) + 32;
        printf("%f F",output_temp);
        break;
    
    default:
        break;
    }
    



}