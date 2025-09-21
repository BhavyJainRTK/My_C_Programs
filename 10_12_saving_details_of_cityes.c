#include <stdio.h>
#include <string.h>

// declearing datatype

struct census
{
    char city[5][20];
    long int population[5];
    int literacy_rate[5];

    char temp_city[20];
    long int temp_pop;
    int temp_lit;
};

// input from user

void input(struct census *first)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter city name > ");
        scanf("%s", first->city[i]);
        printf("Enter population > ");
        scanf("%ld", &first->population[i]);
        printf("Enter literacy rate in percentage > ");
        scanf("%d", &first->literacy_rate[i]);
    }
}

// sorting alphabetically

void name_ac(struct census *first)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(first->city[i], first->city[j]) > 0)
            {
                strcpy(first->temp_city, first->city[i]);
                first->temp_pop = first->population[i];
                first->temp_lit = first->literacy_rate[i];

                strcpy(first->city[i], first->city[j]);
                first->population[i] = first->population[j];
                first->literacy_rate[i] = first->literacy_rate[j];

                strcpy(first->city[j], first->temp_city);
                first->population[j] = first->temp_pop;
                first->literacy_rate[j] = first->temp_lit;
            }
        }
    }
}

// sorting population

void population_sort(struct census *first)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (first->population[i] > first->population[j])
            {
                strcpy(first->temp_city, first->city[i]);
                first->temp_pop = first->population[i];
                first->temp_lit = first->literacy_rate[i];

                strcpy(first->city[i], first->city[j]);
                first->population[i] = first->population[j];
                first->literacy_rate[i] = first->literacy_rate[j];

                strcpy(first->city[j], first->temp_city);
                first->population[j] = first->temp_pop;
                first->literacy_rate[j] = first->temp_lit;
            }
        }
    }
}

// sorting literacy rate

void literacy_rate_sort(struct census *first)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (first->literacy_rate[i] > first->literacy_rate[j])
            {
                strcpy(first->temp_city, first->city[i]);
                first->temp_pop = first->population[i];
                first->temp_lit = first->literacy_rate[i];

                strcpy(first->city[i], first->city[j]);
                first->population[i] = first->population[j];
                first->literacy_rate[i] = first->literacy_rate[j];

                strcpy(first->city[j], first->temp_city);
                first->population[j] = first->temp_pop;
                first->literacy_rate[j] = first->temp_lit;
            }
        }
    }
}

// output

void display(struct census first)
{
    printf("\n%-20s %-15s %-15s", "City", "Population", "Literacy Rate");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%-20s  %-15ld  %-15d", first.city[i], first.population[i], first.literacy_rate[i]);
    }
}

int main()
{
    struct census first;

    // calling functions

    input(&first);

    printf("\ncities sorted alphabetically by name:\n");
    name_ac(&first);
    display(first);

    printf("\ncities sorted in ascending order by population:\n");
    population_sort(&first);
    display(first);

    printf("\ncities sorted in ascending order by literacy rate:\n");
    literacy_rate_sort(&first);
    display(first);
}