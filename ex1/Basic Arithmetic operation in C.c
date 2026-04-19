#include<stdio.h>
int main()
{
   float a,b;
   float sum,difference,quotient;
   int remainder;
   printf("Enter the value of a:");
   scanf("%f",&a);
   printf("Enter the value of b:");
   scanf("%f",&b);
   sum=a+b;
   difference=a-b;
   quotient=a/b;
   remainder=(int)a%(int)b;
   printf("The sum= %.2f\nThe difference= %.2f\n",sum,difference);
   printf("The quotient= %.2f\nThe remainder= %d",quotient,remainder);
   return 0;
}
