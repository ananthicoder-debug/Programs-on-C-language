//cat head.h 
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
int PrimeNum(int n)
{
   int i;
   for(i=2;i<n;i++)
   {
      if(n%i==0)
      {
         return 0;
      }
      return 1;
 }
}
//app
#include"head.h"
int main()
{
   int p,f,a,b;
   printf("Enter the lower limit:");
   scanf("%d",&a);
   printf("Enetr the upper limit:");
   scanf("%d",&b);
   if(a==0||a==1)
   {
      a=2;
   }
   for(p=a;p<b;p++)
   {
      f=PrimeNum(p);
      if(f==1)
      {
         printf("%d\n",p);
      }
  }
   return 0;
}

//make
mul:imp.o mulapp.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
