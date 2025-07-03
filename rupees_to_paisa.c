// taking input from user in rupees and giving output in paisa :

#include<stdio.h>
#define convert 100
int main()
{
    float rupees,paisa;
    printf("enter the prise in rupees : ");
    scanf("%f",&rupees);

    paisa = rupees * convert;

    printf("prise in paisa = %f",paisa);

}