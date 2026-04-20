//head
#include<stdio.h>
void compute(float l,float b,float *area,float *perimeter);
//imp
#include"computehead.h"
void compute(float l,float b,float *area,float *perimeter)
{
   *area=l*b;
   *perimeter=2*(l+b);
}
//app
#include"computehead.h"
int main()
{
   float l,b;
   float area,perimeter;
   printf("Enter length:");
   scanf("%f",&l);
   printf("Enter breadth:");
   scanf("%f",&b);
   compute(l,b,&area,&perimeter);
   printf("The area and perimeter of rectangle is %.2f and %.2f\n ",area,perimeter);
   return 0;
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
