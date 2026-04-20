#include<stdio.h>
int main()
{
   long int i=1,n,fact=1;
   printf("Enter a number:");
   scanf("%d",&n);
   while(i<=n)
   {
      fact=fact*i;
      i++;
   }
   printf("Values of %d fact is %d\n",n,fact);
   return 0;
}
