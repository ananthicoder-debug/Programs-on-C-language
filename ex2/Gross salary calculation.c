#include<stdio.h>
int main()
{
   int bp,hra,da,r,gs;
   printf("Enter your basic pay:");
   scanf("%d",&bp);
   if(bp<=10000)
   {
      hra=0.2*bp;
      da=0.8*bp;
      r=0.02*bp;
      printf("HRA=%d\n",hra);
      printf("R=%d\n",r);
      printf("DA=%d\n",da);
   }
   else if(bp<=20000)
   {
      hra=0.25*bp;
      da=0.9*bp;
      r=0.05*bp;
      printf("HRA=%d\n",hra);
      printf("R=%d\n",r);
      printf("DA=%d\n",da);
   }
   else
   {
      hra=0.3*bp;
      da=0.95*bp;
      r=0.07*bp;
      printf("HRA=%d\n",hra);
      printf("R=%d\n",r);
      printf("DA=%d\n",da);
   }
   gs=(bp+hra+da)-r;
   printf("Your gross salary is %d",gs);
   return 0;
}
