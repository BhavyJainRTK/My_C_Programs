#include <stdio.h>
#include <string.h>

struct marks
{
    int subject1;
    int subject2;
    int subject3;
    int total;
};

int main()
{
    struct marks student[3] = {{10, 10, 10, 0}, {20, 20, 20, 0}, {30, 30, 30, 0}};
    
    struct marks total = {0,0,0,0};

    for (int i = 0; i < 3; i++)
    {
        student[i].total = student[i].subject1 + student[i].subject2 + student[i].subject3;

        total.subject1 = total.subject1 + student[i].subject1;
        total.subject2 = total.subject2 + student[i].subject2;
        total.subject3 = total.subject3 + student[i].subject3;

        total.total = total.total + student[i].total;
    }

    printf("subject     total\n");

    for (int i = 0; i < 3; i++)
    {
        printf("student[%d]  > %d\n",i+1,student[i].total);
    }

    printf("subject1  > %d\n",total.subject1);
    printf("subject2  > %d\n",total.subject2);
    printf("subject3  > %d\n",total.subject3);

    printf("total > %d",total.total);
    
}
