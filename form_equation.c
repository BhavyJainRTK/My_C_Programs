// QUES : 1
// write a program to display the equation of a line in the form (ax + by = c)
// for a = 5 , b = 8 and c = 18 

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    
    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("Enter the value of c :");
    scanf("%d",&c);
    
    printf("the equation becomes : %dx + %dy = %dc",a,b,c);
}