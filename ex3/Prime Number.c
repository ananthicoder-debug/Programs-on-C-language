#include<stdio.h>
#include<math.h>
int main()
{
   int n,m,r,i;
   printf("Enter a number:");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {
      if(n%2==0)
         r++;
   }
   if(r!=0)
      printf("Not a prime number\n");
   else
      printf("Prime number\n");
   return 0;
}
