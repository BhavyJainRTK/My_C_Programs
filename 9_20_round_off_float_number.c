#include<stdio.h>
#include<math.h>

float float_number();
float round_off(float n);
int main()
{
    float number;

    number = float_number();
    number = round_off(number);

    printf(" > %.2f",number);
}

float float_number()
{
    float n;
    printf("Enter the float number > ");
    scanf("%f",&n);
    return n;
}

float round_off(float n)
{
    return roundf(n * 100) / 100;
}