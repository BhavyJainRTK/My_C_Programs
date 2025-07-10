#include<stdio.h>
#include<string.h>

int main()
{
    char student[10][20];
    char more_80[10][20];
    char more_60[10][20];
    char more_40[10][20];
    char less_40[10][20];
    float marks[20];
    int x,i;
    int m80 = 0 , m60 = 0, m40 = 0, l40 = 0;

    printf("HOW MUCH STUDENT YOU WANT TO ENTER > ");
    scanf("%d",&x);

    for ( i = 0; i < x; i++)
    {
        printf("ENTER THE NAME OF STUDENT > ");
        scanf("%s",&student[i]);
        printf("ENTER MARKS > ");
        scanf("%f",&marks[i]);
    }

    for ( i = 0; i < x; i++)
    {
        if (marks[i] > 80)
        {
            printf("%s get %f\n",student[i],marks[i]);
            strcpy(more_80[m80++],student[i]);

        }
        else if (marks[i] > 60)
        {
            strcpy(more_60[m60++],student[i]);
        }
        else if (marks[i] > 40)
        {
            strcpy(more_40[m40++],student[i]);
        }
        else if (marks[i] < 40)
        {
            strcpy(less_40[l40++],student[i]);
        }
    }
        printf("\nSTUDENT GET MORE THEN 80 MARKS\n");
        for ( i = 0; i < m80; i++)
        {
            printf("> %s\n",more_80[i]);
        }
        printf("\n\nSTUDENT GET MORE THEN 60 MARKS\n");
        for ( i = 0; i < m60; i++)
        {
            printf("> %s\n",more_60[i]);
        }
        printf("\n\nSTUDENT GET MORE THEN 40 MARKS\n");
        for ( i = 0; i < m40; i++)
        {
            printf("> %s\n",more_40[i]);
        }
        printf("\n\nSTUDENT GET LESS THEN 40 MARKS\n");
        for ( i = 0; i < l40; i++)
        {
            printf("> %s\n",less_40[i]);
        }
    
}