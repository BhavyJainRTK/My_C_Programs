/* write a program to determine the salvage value of an item when the purchase prise , year
   of service and and the annual depreciation are given */

#include<stdio.h> 

int main()
{
    float purchase_p,year_service,annual_dep,salvage_value,x=1,y;

    printf("enter the purchase prise : ");
    scanf("%f",&purchase_p);

    printf("enter age of item : ");
    scanf("%f",&year_service);

    printf("enter annual depreciation in percentage : ");
    scanf("%f",&annual_dep);
    annual_dep = annual_dep/100;

    while (x <= year_service)
    {
        purchase_p = purchase_p - (purchase_p*annual_dep);
        x += 1;
    }
    printf("salvage value %f",purchase_p);
    

}