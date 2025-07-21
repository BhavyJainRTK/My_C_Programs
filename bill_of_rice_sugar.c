// prise of [RICE = 16.75 / KG]  [SUGAR = 15.00 / KG] In rupees :

#include <stdio.h>
#define rice 16.75
#define sugar 15.00

int main()
{
    typedef float weight;
    weight w1, w2, t1, t2, t;

    printf("enter the weight of rice and sugar [KG]: ");
    scanf("%f %f", &w1, &w2);

    t1 = rice * w1;
    t2 = sugar * w2;
    t = t1 + t2;

    printf("__________________________\n");
    printf("! *** LIST OF ITEMS ***  !\n");
    printf("!    ITEM      PRISE     !\n");
    printf("!    RICE      %.2f/-   !\n", t1);
    printf("!    SUGAR     %.2f/-   !\n", t2);
    printf("!------------------------!\n");
    printf("!    total     %.2f/-   !\n", t);
    printf("!________________________!");
}