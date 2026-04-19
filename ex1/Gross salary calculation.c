#include<stdio.h>
int main()
{
   float bp,gs,da,hra;
   int allowance=1000;
   printf("Enter your basic pay:");
   scanf("%f",&bp);
   da=0.5*bp;
   hra=0.1*bp;
   gs=bp+da+hra-allowance;
   printf("Your DA is %.2f\n",da);
   printf("HRA is %.2f\n",hra);
   printf("Your gross salary is %.2f\n",gs);
   return 0;
}
