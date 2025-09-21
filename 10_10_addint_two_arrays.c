#include <stdio.h>

int n;

// creating datatype

struct data
{
    int array[100];
    int size;
};

void input_size(struct data *user)
{
    printf("How many elements you want to enter > ");
    scanf("%d", &user->size);
    n = user->size;
}

void input_array(struct data *user) // input from user
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d > ", i + 1);
        scanf("%d", &user->array[i]);
    }
}

void display(struct data user) // for output
{
    printf("(");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", user.array[i]);
        printf(",");
    }
    printf(" )");
}

int display_product(struct data user) // giving output
{
    int p;
    printf("\nEnter the number for product elements > ");
    scanf("%d", &p);

    printf("(");

    for (int i = 0; i < n; i++)
    {
        printf(" %d", user.array[i] * p); // multiplying each element
        printf(",");
    }

    printf(" )");
}

// adding two array

int adding_array(struct data user,struct data xuser)
{
    printf("(");

    for (int i = 0; i < n; i++)
    {
        printf(" %d", user.array[i] + xuser.array[i]); // multiplying each element
        printf(",");
    }

    printf(" )");
}

int main()
{
    struct data user1;
    struct data user2;

    // calling of functions

    input_size(&user1);

    printf("Enter elements for first array\n");
    input_array(&user1);

    printf("Enter elements for second array\n");
    input_array(&user2);

    display(user1);
    printf(" + ");
    display(user2);
    printf(" = ");

    printf("\n");

    adding_array(user1,user2);

    return 0;
}