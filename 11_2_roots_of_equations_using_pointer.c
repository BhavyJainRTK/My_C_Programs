#include <stdio.h>
#include <math.h>

void roots(float *coeff, float *root)
{
    float a = coeff[0];
    float b = coeff[1];
    float c = coeff[2];

    float discriminant = (b * b) - (4.0 * a * c);

    if (discriminant >= 0) // real roots
    {
        root[0] = (-b + sqrt(discriminant)) / (2.0 * a);
        root[1] = (-b - sqrt(discriminant)) / (2.0 * a);
    }
    else // complex roots
    {
        root[0] = root[1] = NAN; // mark as not real
    }
}

// input from user 

void input(float *coeff)
{
    printf("enter a ,b and c > ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &coeff[i]);
    }
}

int main()
{
    float coeff[3];
    float root[2];

    // calling functions
    
    input(coeff);
    roots(coeff, root);

    if (isnan(root[0]))
    {
        printf("Roots are complex (not real).\n");
    }
    else
    {
        printf("First root  > %.2f\n", root[0]);
        printf("Second root > %.2f\n", root[1]);
    }
}