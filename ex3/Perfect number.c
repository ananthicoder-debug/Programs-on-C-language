#include<stdio.h>
int main()
{
   int n,i,a,p,f=0;
   printf("Enter a number:");
   scanf("%d",&n);
   for(i=1;n/2>=i;i++)
   {
      p=n%i;
      if(p==0)
      {
         f=f+i;
      }
   }
   if(f==n)
   {
      printf("%d is a perfect number",n);
   }
   else
   {
      printf("%d is not a perfect number",n);
   }
   return 0;
 }
