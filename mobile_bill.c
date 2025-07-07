/* cost OF RECHARGE = ₹250 and above 100 CALLS + ₹1.25 per call */

#include<stdio.h>

int main()
{
    int call;
    float total=250;

    printf("enter the number of calls you make : ");
    scanf("%d",&call);
    printf("__________________________________\n");
    printf("!           MOBILE BILL          !\n");
    printf("!    RECHARGE     -    250.00   !\n");

    if (call > 100)
    {
        call = call - 100;
    printf("! %d extra call   -    %.2f    !\n",call,call*1.25);
    }
    
    total = 250 + (call*1.25);

    printf("!     TOTAL       -    %.2f   !\n",total);
    printf("!________________________________!\n");
}