/*    purchase amount                     discount
                                mill cloth        handloom item
        0 --- 100                  ---                 5%
      101 --- 200                   5%                7.5%
      201 --- 300                   7.5%               10%
      above 300                     10%                15%     */

#include <stdio.h>

int main()
{
    char n;
    float mc, hi, final_prise, discount;
    printf("(a) > MILL CLOTH\n");
    printf("(b) > HANDLOOM ITEM\n\n");
    printf("ENTER YOUR TYPE\n > ");

    scanf("%c", &n);

    switch (n)
    {
    case 'a':

        printf("ENTER YOUR PURCHASE AMOUNT");
        scanf("%f", &mc);
        if (mc > 0 && mc < 101)
        {
            final_prise = mc;
            discount = 0;
        }
        else if (mc > 100 && mc < 201)
        {
            final_prise = mc - (mc * 0.05);
            discount = 5;
        }
        else if (mc > 200 && mc < 301)
        {
            final_prise = mc - (mc * 0.075);
            discount = 7.5;
        }
        else if (mc > 300)
        {
            final_prise = mc - (mc * 0.10);
            discount = 10;
        }

        printf(" _____________________________\n");
        printf("|       MILL CLOTH BILL       |\n");
        printf("|-----------------------------!\n");
        printf("|     TOTAL   %13.2f   !\n", mc);
        printf("|    DISCOUNT %13.2f %% |\n", discount);
        printf("|  GRAND-TOTAL%13.2f   |\n", final_prise);
        printf("|_____________________________|\n");

        break;

    case 'b':

        printf("ENTER YOUR PURCHASE AMOUNT");
        scanf("%f", &hi);
        if (hi > 0 && hi < 101)
        {
            final_prise = hi - (hi * 0.05);
            discount = 5;
        }
        else if (hi > 100 && hi < 201)
        {
            final_prise = hi - (hi * 0.075);
            discount = 7.5;
        }
        else if (hi > 200 && hi < 301)
        {
            final_prise = hi - (hi * 0.10);
            discount = 10;
        }
        else if (hi > 300)
        {
            final_prise = hi - (hi * 0.15);
            discount = 15;
        }

        printf(" _____________________________\n");
        printf("|     HANDLOOM ITEMS BILL     |\n");
        printf("|-----------------------------!\n");
        printf("|     TOTAL   %13.2f   !\n", hi);
        printf("|    DISCOUNT %13.2f %% |\n", discount);
        printf("|  GRAND-TOTAL%13.2f   |\n", final_prise);
        printf("|_____________________________|\n");

        break;
    default:
        break;
    }
}