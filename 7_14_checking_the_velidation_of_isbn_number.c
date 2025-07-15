#include<stdio.h>

int main()
{
    // DECLEARING VARIABLE AND ARRAY.

    int number[1][10];
    int sum=0,n=1;

    printf("ENTER THE ISBN NUMBER \n");
    printf("PRESS ENTER AFTER EACH DIGIT ");

    // TAKING INPUT VROM USER.
    for (int i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d",&number[0][i]);
    }

    // MULTIPLYING THE NUMBER.

    for (int i = 0; i < 9; i++)
    {
        sum = sum + (number[0][i] * n);
        n = n + 1;
    }

    // CHECKING THE NUMBER IS VELID OR NOT
    if ((sum % 11) == number[0][9])
    {
        printf("GREAT!! ITS A VELID ISBN NUMBER.");
    }
    else
    {
        printf("SORRY!! ITS A NOT VALID ISBN NUMBER.");
    }
}