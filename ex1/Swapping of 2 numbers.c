#include<stdio.h>
int main()
{
   int a,b,t;
   printf("Enter a number a:");
   scanf("%d",&a);
   printf("Enter a number b:");
   scanf("%d",&b);
   t=a;
   a=b;
   b=t;
   printf("Swapped values of a=%d\tb=%d",a,b);
   return 0;
}
