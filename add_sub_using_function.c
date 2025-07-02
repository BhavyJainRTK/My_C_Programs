// add and difference between two number using function :

#include<stdio.h>

int add(int a, int b)  {
    return a + b ;
}

int sub(int a, int b)  {
    return a-b ;
}

int main()
{
    int x, y;

    printf("enter two numbers = ");
    scanf("%d %d",&x,&y);

    printf("%d + %d = %d \n",x,y,add(x,y));
    printf("%d - %d = %d",x,y,sub(x,y));

}