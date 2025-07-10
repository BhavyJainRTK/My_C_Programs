/* solving the equation ti find out the value os x1 and x2
        x1 = (md - bn) / (ad - cd)
        x2 = (na - mc) / (ad - cd)                      */

#include<stdio.h>

int main()
{
    int a,b,c,d,m,n;
    float x1,x2;
    
    printf("ENTER THE VALUES\n");

    printf("a > ");
    scanf("%d",&a);

    printf("b > ");
    scanf("%d",&b);

    printf("c > ");
    scanf("%d",&c);

    printf("d > ");
    scanf("%d",&d);

    printf("m > ");
    scanf("%d",&m);

    printf("n > ");
    scanf("%d",&n);

    if (((a*d)-(c*d))==0)
    {
        goto error;
    }

    x1 = ((float)(m*d) - (b*n)) / ((a*d) - (c*d));
    x2 = ((float)(n*a) - (m*c)) / ((a*d) - (c*d));

    printf("\nSOLUTION\n");
    printf("x1 > %.2f\n",x1);
    printf("x2 > %.2f",x2);

    return 0;

    error:
    {printf("<NOT DEFINED>");}

    return 1;
}