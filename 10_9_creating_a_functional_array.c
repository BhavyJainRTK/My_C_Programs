#include <stdio.h>

int n;

// creating datatype

struct data
{
    int array[100];
    int size;
};

void input(struct data *user) // input from user
{
    printf("How many elements you want to enter > ");
    scanf("%d", &user->size);
    n = user->size;

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

int update(struct data *user) // incerting a element
{
    int index, element;
    printf("\nEnter the element you want to enter > ");
    scanf("%d", &element);

    printf("Enter the index > ");
    scanf("%d", &index);

    for (int i = n; i > index; i--)
    {
        user->array[i] = user->array[i - 1];
    }

    user->array[index] = element;
    n++;
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

int main()
{
    struct data user;

    // calling of functions

    input(&user);
    display(user);
    update(&user);
    display(user);
    display_product(user);

    return 0;
}