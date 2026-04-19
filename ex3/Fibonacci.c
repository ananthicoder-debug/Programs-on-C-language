#include<stdio.h>
int main()
{
   int a=0,b=1,s,i=3,n;
   printf("Enetr a number :");
   scanf("%d",&n);
   printf("%d,%d,",a,b);
   while(n>=i)
   {
      s=a+b;
      a=b;
      b=s;
      i++;
      printf("%d,",s);
   }
   return 0;
}
