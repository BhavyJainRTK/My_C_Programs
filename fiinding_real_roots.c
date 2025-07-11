/* finding real roots of the equation ax² + bx + c */

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x,x1,x2;
    float nm,dm;

    printf("ENTER THE VALUES\n");

    printf(" a > ");
    scanf("%f",&a);
    
    printf(" b > ");
    scanf("%f",&b);

    printf(" c > ");
    scanf("%f",&c);

    if (a == 0 && b == 0)
    {
        goto end;
    }
    else if (a == 0)
    {
        printf("x > %.2f",-c/b);
        goto end;
    }
    else if (((b*b)- (4*a*c))<0)
    {
        goto end2;
    }
    
    
    nm = sqrt(nm = (b*b) - 4*a*c);
    dm = 2*a;

    x1 = (-b + nm)/dm;
    x2 = (-b - nm)/dm;

    printf("x1 > %.2f\n",x1);
    printf("x2 > %.2f\n",x2);

    return 0;

end:
    printf("NO SOLUTION");

    return 1;

end2:
    printf("NO REAL ROOTS");
}