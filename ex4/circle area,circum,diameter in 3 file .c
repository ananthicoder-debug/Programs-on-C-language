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
float Diameter(float r)
{
   int d=2*r;
   return d;
}
float Area(float r)
{
   float a=3.14*r*r;
   return a;
}
float Circumference(float r)
{
   float c=2*3.14*r;
   return c;
}

//app
#include"head.h"
int main()
{
   float a,r,d,c;
   printf("Enter the value of radius:");
   scanf("%f",&r);
   d=Diameter(r);
   c=Circumference(r);
   a= Area(r);
   printf("Area is %.2f\n",a);
   printf("Diameter is %.2f\n",d);
   printf("Circumference is %.2f\n",c);
   return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
