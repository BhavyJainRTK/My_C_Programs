#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float x[50],y[50];
    float sumxy=0,sumx=0,sumy=0,sumxsq=0,sumxksq;
    float m,c;

    printf("HOW MANY POINTS YOU WNAT TO ENTER > ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        printf("ENTER [%d] POINT (x,y) > ",n + 1);
        scanf("%f %f",&x[i],&y[i]);

        sumx = sumx + x[i];
        sumy = sumy + y[i];

        sumxsq = sumxsq + (x[i] * x[i]);
        sumxksq = sumx * sumx;
        sumxy = sumxy + (x[i]*y[i]);
    }
    m = ((n * sumxy) - (sumx * sumy)) / ((n * sumxsq) - sumxksq);
    c = (sumy - (m * sumx)) / n;

    printf("m = %f and c = %f\n",m,c);
    printf("BEST FIR LINE y = %f x + %f",m,c);

}
