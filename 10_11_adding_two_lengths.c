#include <stdio.h>
#include <math.h>

// declearing datatype

struct metric
{
    float meter;
    float centimeter;
};

struct british
{
    float foot;
    float inch;
};

// input from user

void input_m(struct metric *user)
{
    printf("Meters > ");
    scanf("%f", &user->meter);

    printf("Centimeter > ");
    scanf("%f", &user->centimeter);
}

void input_b(struct british *user)
{
    printf("foot > ");
    scanf("%f", &user->foot);

    printf("inch > ");
    scanf("%f", &user->inch);
}

// conversion into inch

void convert_to_inch(struct metric *user, struct british *xuser)
{
    xuser->inch = xuser->inch + (user->centimeter / 2.54);
    xuser->inch = xuser->inch + (user->meter * 39.3701);
    xuser->inch = xuser->inch + (xuser->foot * 12.0);
}

// converting inch to foot

void convert_to_foot(struct british xuser)
{
    int foot = xuser.inch / 12;
    float inch = fmod(xuser.inch, 12);

    printf("\n %d feet and %f inch.", foot, inch);
}

int main()
{
    struct metric user1;
    struct british user2;

    input_m(&user1);
    input_b(&user2);

    convert_to_inch(&user1, &user2);
    convert_to_foot(user2);
}