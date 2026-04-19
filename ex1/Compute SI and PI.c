//compute SI and CI
#include<stdio.h>
#include<math.h>
int main()
{
        float  P,T,R,b,a,si;
        float ci;
        printf("Enter the value of Principal:");
        scanf("%f",&P);
        printf("Enter the value of time period(in yeras):");
        scanf("%f",&T);
        printf("Enter the value of rate of interest:");
        scanf("%f",&R);
        a=T;
        si=(P*T*R)/100;
        b=1+(R/100);
        ci=(P*pow(b,a))-P;
        printf("Simple interest=%.2f\ncompound interest=%.2f",si,ci);
        return 0;
}
