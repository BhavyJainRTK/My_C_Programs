#include <stdio.h>
#include <string.h>

int main()
{
    // DECLEARING THE VARIABLE AND STRING.

    int n;
    char car_type[10][15];
    int s_month[10];
    int e_month[10];
    int unit[10];
    int cost[10];
    int t_cost[10];

    // TAKING INPUT FROM USER/

    printf("ENTER THE FOLLOWING DETAILS\n");
    printf("HOW MANY TYPE OF VEHICLE WERE THERE > ");
    scanf("%d", &n);

    // SVAING IN STRING.

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE MODEL OF VEHICLE > ");
        scanf("%s", car_type[i]);
        printf("ENTER STARTING MONTH > ");
        scanf("%d", &s_month[i]);
        printf("ENTER STARTING MONTH > ");
        scanf("%d", &e_month[i]);
        printf("ENTER THE UNIT SAIL > ");
        scanf("%d", &unit[i]);
        printf("ENTER THE PRISE OF SINGLE UNIT");
        scanf("%d", &cost[i]);

        // FINDING THE TOTAL COST.

        t_cost[i] = 0;
        t_cost[i] = cost[i] * unit[i];
    }

    printf("%12s %20s %12s %12s\n", "VEHICLE TYPE", "MONTH OF SALES", "UNIT SAIL", "TOTAL PRISE");

    // PRINTING THE TABLE.
    
    for (int i = 0; i < n; i++)
    {
        printf("%8s %16d/%01d %15d %14d\n", car_type[i], s_month[i], e_month[i], unit[i], t_cost[i]);
    }
}