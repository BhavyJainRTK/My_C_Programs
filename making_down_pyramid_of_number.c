// making down pyramid of number :
//   example    1234
//              234
//              34
//              4

#include<stdio.h>

int main()
{
    int num,extra,a=1;

    printf("enter a number : ");
    scanf("%d",&num);
    extra = num;

    while (num >= 10)
    {
        num = num /10;
        a = a * 10;
    }
    
    printf("%d\n",extra);
    while (extra >= 10)
    {
        extra = extra % a;
        a = a /10;
        printf("%d\n",extra);
    }
    
    
}