#include <stdio.h>

int add(int a[0],int n,int x);

int sol,i,solution=1;
int main()
{
    int n_terms,x;
    int value_a[10];

    printf("Enter the number of terms > ");
    scanf("%d",&n_terms);

    printf("Enter the value of x > ");
    scanf("%d",&x);

    for ( i = 1; i <= n_terms; i++)
    {
        printf("Enter a%d = ",i);
        scanf("%d",&value_a[i-1]);
    }

    int solution = add(value_a,n_terms,x);

    printf("Solution > %d",solution);

}

int add(int a[0],int n,int x)
{
    int result = a[0];

    for (int i = 0; i < n; i++)
    {
        result = result * (x + a[i]);
    }
    return result;
    
}