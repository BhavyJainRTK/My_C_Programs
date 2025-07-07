/* 3.9 In inventory management, the Economic Order Quantity for a single item and the optimal Time Between Orders 
Write a program to compute EOQ and TBO, given demand rate (items per unit time), setup costs (per order), 
and the holding cost (per item per unit time). */

#include<stdio.h>
#include<math.h>

int main()
{
    float demand_r , setup_c , holding_c , eoq , tbo ;

    printf("enter the demand : ");
    scanf("%f",&demand_r);

    printf("enter setup cost : ");
    scanf("%f",&setup_c);

    printf("holding cost per item per unit time : ");
    scanf("%f",&holding_c);

    eoq = (2 * demand_r * setup_c) / (holding_c);

    printf("ECONOMIC ORDER QUANTITY : %f\n",sqrt(eoq));

    tbo = (2 * setup_c) / (demand_r * holding_c);

    printf("OPTIMAL TIME BETWEEN ORDERS : %f",sqrt(tbo));

}