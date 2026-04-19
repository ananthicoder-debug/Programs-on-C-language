#include<stdio.h>
int main()
{
   int n,i,sp,k;
   printf("Enter the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(sp=1;sp<n-i+1;sp++)
      {
         printf(" ");
      }
      for(k=1;k<=i;k++)
      {
         printf("*");
      }
     printf("\n");
    }
   for(i=0;i<n;i++)
   {
      for(sp=0;sp<i;sp++)
      {
         printf(" ");
      }
      for(k=n-i;k>0;k--)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
