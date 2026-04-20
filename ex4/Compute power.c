//head
#include<stdio.h>
float computepower(float base,float exp);
//imp
float computepower(float base,float exp)
{
   if(exp==0)
      return 1;
   else if(exp==1)
      return base;
   else if(exp<0)
      return (1/computepower(base,-exp));
   else
      return base*computepower(base,exp-1);
}
//app
#include"power.h"
int main(){
   float base,exp,res;
   printf("Enter the base value:");
   scanf("%f",&base);
   printf("Enter exponent:");
   scanf("%f",&exp);
   res=computepower(base,exp);
   printf("%.2f to the power %.2f is %.2f\n",base,exp,res);
   return 0;
}
//make
power :powerimp.o powerapp.o
        cc powerimp.o powerapp.o -o power
powerimp.o :powerimp.c power.h
        cc -c powerimp.c
powerapp.o :powerapp.c power.h
        cc -c powerapp.c
