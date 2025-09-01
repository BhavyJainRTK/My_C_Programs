#include <stdio.h>
#include <math.h>

int factorial(int n);
int degree(int n);

int main()
{
    
    int x,m_x = 1, degree_a, ans = 0, f_ans = 0;

    printf("How much step you want > ");
    scanf("%d", &x); // number of term in equation

    for (int i = 0; i < x; i++) // loop for solving each term
    {
        int degree_a = degree(m_x); // numerator 
        int fact = factorial(m_x); // denominator

        ans = degree_a / fact; // solution 

        if (i % 2 == 0)
            f_ans = f_ans + ans; // add if even step
        else
            f_ans = f_ans - ans;

        m_x = m_x + 2;
    }

    printf("%d", f_ans);
}

int degree(int n)
{
    return pow(n, n); // numerator
}

int factorial(int n) // denominator
{
    if (n == 0 || n == 1) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}