//head-gcd
#include<stdio.h>
int gcd(int a,int b);
//imp
#include "gcd.h"
int main()
{
   int i,j;
   printf(" Enter two numbers:");
   scanf("%d %d",&i,&j);
   if (j>i)
   {
      int t;
      t=i;
      i=j;
      j=t;
   }
   printf("The gcd of %d and %d is %d\n",i,j,gcd(i,j));
   return 0;
}
//app
#include "gcd.h"
int main()
{
   int i,j;
   printf(" Enter two numbers:");
   scanf("%d %d",&i,&j);
   if (j>i)
   {
      int t;
      t=i;
      i=j;
      j=t;
   }
   printf("The gcd of %d and %d is %d\n",i,j,gcd(i,j));
   return 0;
}
//make
gcd :gcdimp.o gcdapp.o
        cc gcdimp.o gcdapp.o -o gcd
gcdapp.o :gcdapp.c gcd.h
        cc -c gcdapp.c
gcdimp.o :gcdimp.c gcd.h
        cc -c gcdimp.c
