#include<stdio.h>
int main()
{
   float u,h;
   printf("Enter the electric unit:");
   scanf("%f",&u);
   if(u>0&&u<=50)
   {
      u=u*0.5;
      h=u+20/100*u;
   }
   else if(u>50&&u<=150)
   {
      u=u-50;
      u=u*0.75+0.50*50;
      h=u+20/100*u;
    }
   else if(u>150&&u<=250)
   {
      u=u-150;
      u=u*1.20+0.5*50+0.75*100;
      h=u+20/100*u;
   }
   else
   {
      u=u-250;
      u=u*1.50+100*00.75+50*0.50+100*1.20;
      h=u+20/100*u;
   }
   printf("The rate of electric charge is %.2f\n",h);
   return 0;
}
