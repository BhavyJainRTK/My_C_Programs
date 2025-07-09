#include <stdio.h>

int main()
{
    float number;

    printf("enter a floating number > ");
    scanf("%f",&number);

    printf("(a) correct to two decimal places > %.2f\n",number);
    printf("(b) correct to four decimal places > %.4f\n",number);
    printf("(c) correct to two decimal places > %.8f",number);
}