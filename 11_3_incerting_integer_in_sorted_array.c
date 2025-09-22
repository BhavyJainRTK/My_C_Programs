#include <stdio.h>

// global variable

int n;

// input from user

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

// incerting number

int update(int *array)
{
    int x;
    printf("enter the element you want te add > ");
    scanf("%d", &x);

    int temp;
    int position;

    for (int i = 0; i < n; i++)
    {
        // taking index

        if (x <= array[i])
        {
            position = i;

            n++;

            // shifting elements

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

// output statement

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

    // calling functions 
     
    input(main_array);
    display(main_array);
    update(main_array);
    display(main_array);
}