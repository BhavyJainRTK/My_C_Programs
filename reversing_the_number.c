#include<stdio.h>

int main()
{
    int num,x,i=10000;
    int fn = 0;

    printf("ENTER A FIVE DIGIT NUMBER > ");
    scanf("%d",&num);

    while (i>=1)
    {
        x = (num % 10)*i;
        fn = fn + x;
        num = num / 10;
        i = i / 10;
    }
    printf("REVERSED NUMBER > %d",fn);
    
}