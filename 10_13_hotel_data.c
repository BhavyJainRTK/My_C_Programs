#include <stdio.h>
#include<string.h>

// global variable

char grade[2];
int rent;

// creating data type

struct hotel_data
{
    char name[5][20];
    char city[5][20];
    char grade[5][2];
    int rent[5];
    int rooms[5];

    char temp_name[20];
    char temp_city[20];
    char temp_grade[2];
    int temp_rent;
    int temp_rooms;
};

// input from user

void input(struct hotel_data *first)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Hotel name > ");
        scanf("%s", first->name[i]);
        printf("City > ");
        scanf("%s", first->city[i]);
        printf("Grade > ");
        scanf("%s", first->grade[i]);
        printf("Rent > ");
        scanf("%d", &first->rent[i]);
        printf("Number of rooms > ");
        scanf("%d", &first->rooms[i]);
    }
}

// sorting rent

void charges_sort(struct hotel_data *first)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (first->rent[i] > first->rent[j])
            {
                strcpy(first->temp_name, first->name[i]);
                strcpy(first->temp_city, first->city[i]);
                strcpy(first->temp_grade, first->grade[i]);
                first->temp_rent = first->rent[i];
                first->temp_rooms = first->rooms[i];

                strcpy(first->name[i], first->name[j]);
                strcpy(first->city[i], first->city[j]);
                strcpy(first->grade[i], first->grade[j]);
                first->rent[i] = first->rent[j];
                first->rooms[i] = first->rooms[j];

                strcpy(first->name[j], first->temp_name);
                strcpy(first->city[j], first->temp_city);
                strcpy(first->grade[j], first->temp_grade);
                first->rent[j] = first->temp_rent;
                first->rooms[j] = first->temp_rooms;
            }
        }
    }
}

// grade condition

void grade_check(struct hotel_data first)
{
    printf("\n%-20s %-15s %-15s %-15s %-15s", "Hotel", "City", "Grade","Rent","Rooms");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(first.grade[i],grade) == 0)
        {
            printf("\n%-20s  %-15s  %-15s %-15d %-15d", first.name[i], first.city[i], first.grade[i], first.rent[i],first.rooms[i]);
        }
    }
}

// rent conditin or limit

void rent_check(struct hotel_data first)
{
    printf("\n%-20s %-15s %-15s %-15s %-15s", "Hotel", "City", "Grade","Rent","Rooms");
    for (int i = 0; i < 5; i++)
    {
        if (first.rent[i] < rent)
        {
            printf("\n%-20s  %-15s  %-15s %-15d %-15d", first.name[i], first.city[i], first.grade[i], first.rent[i],first.rooms[i]);
        }
    }
}

int main()
{
    struct hotel_data first;

    // calling function 
    
    input(&first);

    printf("Enter grade for filter > ");
    scanf("%s",grade);

    grade_check(first);

    printf("\nEnter rent limit > ");
    scanf("%d",&rent);

    rent_check(first);
}