/* An electricity board charges the following rates for the use of electricity:
For the first 200 units: 80 P per unit
For the next 100 units: 90 P per unit
Beyond 300 units: Rs 1.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more tha 400, then an additional surcharge of 15% of total amount is charged.
TRODUCTION
Write a program to read the names of users and number of units consumed and charges with names. */

#include <stdio.h>

int main()
{
    int num, i, x;
    char name[5][10];
    float unit[5];
    float total = 0, grand_total = 0;

    printf("HOW MUCH BILL YOU WANT TO PRINT > ");
    scanf("%d", &num);

    printf("ENTER THE FOLLOWING DETAIL\n");

    for (i = 0; i < num; i++)
    {
        printf("NAME > ");
        scanf("%s", name[i]);

        printf("UNITS > ");
        scanf("%f", &unit[i]);
    }

    for (i = 0; i < num; i++)
    {
        printf(" ________________________________________\n");
        printf("|            ELECTRICITY BILL            |\n");
        printf("|----------------------------------------|\n");
        if (unit[i] <= 200)
        {
            total = (unit[i] * 0.80) + 100;
        }
        else if (unit[i] > 200 && unit[i] <= 300)
        {
            x = unit[i] - 200;
            total = 260 + (x * 0.90);
        }
        else if (unit[i] > 300)
        {
            x = unit[i] - 300;
            total = 350 + (x);
        }

        printf("|       NAME     %17s       |\n", name[i]);
        printf("|       UNIT     %17.2f       |\n", unit[i]);
        printf("|   MEETER CHARGE%17.2f       |\n", 100.00);
        printf("|----------------------------------------|\n");
        printf("|       TOTAL    %17.2f/-     |\n", total);

        if (total <= 400)
        {
            printf("|________________________________________|\n");
        }

        if (total > 400)
        {
            grand_total = total + (total * 0.15);
            printf("|----------------------------------------|\n");
            printf("|     SUBCHARGE %16.2f %%       |\n", 15.00);
            printf("|----------------------------------------|\n");
            printf("|    GRAND TOTAL%16.2f/-       |\n", grand_total);
            printf("|________________________________________|\n");
        }
        printf("\n\n");
    }
}