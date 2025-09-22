#include <stdio.h>

int n;

int input(int *array)
{
    printf("how many elements you want to enter > ");
    scanf("%d", &n);

    printf("enter sorted array > ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

int update(int *array)
{
    int x;
    printf("enter the element you want te add > ");
    scanf("%d", &x);

    int temp;
    int position;

    for (int i = 0; i < n; i++)
    {
        if (x <= array[i])
        {
            position = i;

            n++;

            for (int i = n-1; i > position; i--)
            {
                array[i] = array[i - 1];
            }

            array[position] = x;
            break;
        }

        else if (x >= array[n - 1])
        {
            array[n] = x;
            n++;
            break;
        }
    }
}

int display(int *array)
{
    printf("(");
    for (int i = 0; i < n; i++)
    {
        printf(" %d,", array[i]);
    }
    printf(")");
}

int main()
{
    int main_array[20];

    input(main_array);
    display(main_array);
    update(main_array);
    display(main_array);
}