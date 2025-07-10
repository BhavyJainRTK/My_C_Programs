/* you will get adimmition in professional course if only following 
        (A) marks in mathematics >= 60
        (B) physics >= 50
        (C) chemistry >= 40
        (D) total >= 200
        (e) math + phy >= 150*/

#include<stdio.h>

int main()
{
    float math,phy,chem,total=0;
    printf("ENTER YOUR MARKS\n");

    printf("MATHEMATICS > ");
    scanf("%f",&math);

    printf("PHYSICS > ");
    scanf("%f",&phy);

    printf("CHEMISTRY > ");
    scanf("%f",&chem);

    total = math + phy + chem;

    if (total >= 200 || (math+phy)>=150)
    {
        printf("* * * * * * * * congrulations * * * * * * * *\n");
        printf("YOU CAN GET ADIMMITION IN PROFESSIONAL COURSE");
    }
    else
    printf("SORRY!  you can't get adimmition");
    
}