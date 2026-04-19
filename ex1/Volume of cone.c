#include<stdio.h>
#include<math.h>
int main()
{
   int b,r;
   float vol;
   printf("Enter the value of radius:");
   scanf("%d",&b);
   printf("Enter the value of height:");
   scanf("%d",&r);
   vol=0.3*3.14*b*b*r;
   printf("The volume of the cone is %.2f",vol);
   return 0;
  }
