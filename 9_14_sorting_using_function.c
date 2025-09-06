#include<stdio.h>

int sorting(int a[10]);

int n;
int main()
{
    int array1[10],array2[10];

    printf("how many element yuo want to enter is the arrays > ");
    scanf("%d",&n);  // number of element in array

    printf("enter elements for first array > ");

    for (int i = 0; i < n; i++)  // saving array 1 
    {
        scanf("%d",&array1[i]);
    }
    
    printf("enter elements for second array > ");

    for (int i = 0; i < n; i++)  // saving array 2
    {
        scanf("%d",&array2[i]);
    }

    sorting(array1);  // calling function
    sorting(array2);  // calling function
    
    printf("sorted array 1 > ");  // printing sorted array 1
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",array1[i]);
    }
    
    printf("\n");

    printf("sorted array 2 > ");  // printing sorted array 2
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",array2[i]);
    }
    
}

int sorting(int a[10])  // sorting
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp; 
            }
        }
    }

}