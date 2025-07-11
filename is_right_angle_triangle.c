#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,z,x1;

    printf("ETNER THE SIDE OF THE TRIANGLE\n");

    printf("SIDE 1st > ");
    scanf("%f",&x);
    if (x<=0)
    {
        goto error;
    }
    
    x1 = x;

    printf("SIDE 2nd > ");
    scanf("%f",&y);

    if (y<=0)
    {
        goto error;
    }

    printf("SIDE 3rd > ");
    scanf("%f",&z);

    if (z<=0)
    {
        goto error;
    }

    if ( y > x && y >z )
    {
        x = y;
        y = z;
        z = x1;
    }
    else if ( z > x && z > y )
    {
        x = z;
        y = y;
        z = x1;
    }

    if (x == sqrt((y*y) + (z*z)))
    {
        printf("CONGRULATIONS ! \nIT'S A RIGHT ANGLE TRIANGLE");
    }
    else
    {
        printf("SORRY !\nIT'S NOT A RIGHT ANGLE TRIANGLE");
    }
    
    return 0;

    error:
    printf("YOU HAVE ENTERED A WRONG VALUE");    
    
}