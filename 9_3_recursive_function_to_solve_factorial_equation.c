#include <stdio.h>
#include <math.h>

int factorial(int n);
int degree(int x, int n);

int main()
{

    int x, n, m_n = 1, degree_a, ans = 0, f_ans = 0;

    printf("How much terms you want > ");
    scanf("%d", &n); // number of term in equation

    printf("enter the value of x > ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) // loop for solving each term
    {
        int degree_a = degree(x, m_n); // numerator
        int fact = factorial(m_n);     // denominator

        ans = degree_a / fact; // solution

        if (i % 2 == 0)
            f_ans = f_ans + ans; // add if even step
        else
            f_ans = f_ans - ans;

        m_n = m_n + 2;
    }

    printf("%d", f_ans);
}

int degree(int x, int n)
{
    return pow(x, n); // numerator
}

int factorial(int n) // denominator
{
    if (n == 0 || n == 1) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}