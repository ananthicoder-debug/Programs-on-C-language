//head
#include<stdio.h>
int PrimeNum(int);
int fibbo(int);
float power(float,float);
float Diameter(float);
float Area(float);
float Circumference(float);
char Toggle(char);

//imp
#include"head.h"
float power(float b,float e){
   float p;
   if(e==0){
      return 1;
   }
   else{
      p=b*power(b,e-1);
   }
   return p;
}
// app
#include"head.h"
int main()
{
   float b,p,e;
   printf("Enter the value of base:");
   scanf("%f",&b);
   printf("Enter the value of exponent:");
   scanf("%f",&e);
   if(e<0){
      b=1/b;
      e=-e;
      p=power(b,e);
   }
   else if(e>0)
   {
      p=power(b,e);
   }
   else{
         p=1;
   }
    printf("power is %.2f",p);
    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
