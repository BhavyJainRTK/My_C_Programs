#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// global variable

int n;

// creating datatype

struct cricket
{
    char name[50][20];
    char team[50][20];
    int average[50];

    char temp_name[20];
    char temp_team[20];
    int temp_average;
};

// input from user

void input(struct cricket *first)
{
    for (int i = 0; i < n; i++)
    {
        printf("Player name > ");
        scanf("%s", first->name[i]);
        printf("Team name > ");
        scanf("%s", first->team[i]);
        printf("Average > ");
        scanf("%d", &first->average[i]);
    }
}

// sorting alphabetically

void team_sort(struct cricket *first)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(first->team[i], first->team[j]) > 0)
            {
                strcpy(first->temp_name, first->name[i]);
                strcpy(first->temp_team, first->team[i]);
                first->temp_average = first->average[i];

                strcpy(first->name[i], first->name[j]);
                strcpy(first->team[i], first->team[j]);
                first->average[i] = first->average[j];

                strcpy(first->name[j], first->temp_name);
                strcpy(first->team[j], first->temp_team);
                first->average[j] = first->temp_average;
            }
        }
    }
}

// output 

void display(struct cricket first)
{
    printf("\n%-20s %-15s %-15s", "player", "team", "average");

    for (int i = 0; i < n; i++)
    {
        printf("\n%-20s  %-15s  %-15d", first.name[i], first.team[i], first.average[i]);
    }
}

// display according to team

void display_team(struct cricket *first)
{
    int x = 0;
    strcpy(first->temp_team, first->team[0]);

again:
{
    printf("\n\n%s",first->temp_team);
    printf("\n%-20s %-15s %-15s", "player", "team", "average");

    for (int i = x; i < n; i++)
    {
        if (strcmp(first->team[i], first->temp_team) == 0)
        {
            printf("\n%-20s  %-15s  %-15d", first->name[i], first->team[i], first->average[i]);
            x++;
        }
        else
        {
            strcpy(first->temp_team,first->team[i]);
            goto again;
        }
    }
}
}

int main()
{
    struct cricket first;

    printf("How many play you want to enter > ");
    scanf("%d", &n);
    
    // calling functions
    
    input(&first);

    team_sort(&first);
    display(first);

    display_team(&first);
}