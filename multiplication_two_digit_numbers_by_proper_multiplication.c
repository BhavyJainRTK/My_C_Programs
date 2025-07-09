#include<stdio.h>

int main()
{
    int n1,n2,x1,x2;

    printf("enter two two-digits numbers only > ");
    scanf("%d %d",&n1,&n2);

    printf("%20d\n             X%6d\n",n1,n2);
    printf("             ---------\n");
    
    x1 = n2 % 10;
    x2 = n2 / 10;

    printf("%d X %d  is %9d\n",x1,n1,x1*n1);
    printf("%d X %d  is %8dX\n",x2,n1,x2*n1);
    printf("             ---------\n");
    printf("  ADD  them %8d \n",(x1*n1)+((x2*n1)*10));
    printf("             ---------\n");
    
}