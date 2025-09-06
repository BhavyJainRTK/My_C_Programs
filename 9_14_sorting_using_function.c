#include<stdio.h>

int creat_array(int a[10],int b[10],int n);
int sorting(int a[10],int n);
int print_array(int a[10],int b[10],int n);

int main()
{
    int array1[10],array2[10],n;

    printf("how many element yuo want to enter is the arrays > ");
    scanf("%d",&n);  // number of element in array

    creat_array(array1,array2,n);
    sorting(array1,n);  // calling function
    sorting(array2,n);  // calling function

    print_array(array1,array2,n);
    
}

int sorting(int a[10],int n)  // sorting
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

int creat_array(int a[10],int b[10],int n)
{

    printf("enter elements for first array > ");

    for (int i = 0; i < n; i++)  // saving array 1 
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter elements for second array > ");

    for (int i = 0; i < n; i++)  // saving array 2
    {
        scanf("%d",&b[i]);
    }

    return n;
}

int print_array(int a[10],int b[10],int n)
{
    printf("sorted array 1 > ");  // printing sorted array 1
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",a[i]);
    }
    
    printf("\n");

    printf("sorted array 2 > ");  // printing sorted array 2
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",b[i]);
    }
}