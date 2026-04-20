//head-strong
#include<stdio.h>
int strong(int n);
//imp
#include<stdio.h>
int strong(int n);
[24bcs004@mepcolinux ex4]$cat strongimp.c
#include"strong.h"
int strong(int n)
{
   int digit,j,fact=1,s=0;
   while(n!=0)
   {
      digit=n%10;
      for(j=1;j<=digit;j++)
      {
         if(digit==0)
            fact=1;
         fact=fact*j;
      }
      s=s+fact;
      n=n/10;
   }
   return s;
}
//app
#include"strong.h"
int main()
{
   int n,t;
   printf("Enter a number:");
   scanf("%d",&n);
   t=n;
   if(strong(n)==t)
      printf("The given number is a strong number\n");
   else
      printf("The given number is not a strong number\n");
   return 0;
}
//make
strong: strongimp.o strongapp.o
        cc strongimp.o strongapp.o -o strong
strongimp.o: strongimp.c strong.h
        cc -c strongimp.c
strongapp.o: strongapp.c strong.h
        cc -c strongapp.c
