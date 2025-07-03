// write a program to print even numbers :

#include<stdio.h>

int main()
{
    int num,i=1;
    printf("print the even number from 1 to ");
    scanf("%d",&num);

    while (i <= num)
    {
        if (i%2 == 0)
        {
            printf(" %d ,",i);
        }
        i = i + 1;
        
    }
    
}