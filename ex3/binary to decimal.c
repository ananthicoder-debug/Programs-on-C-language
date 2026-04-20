#include<stdio.h>
#include<math.h>
int main()
{
   int dec=0,bin=0,d=0,i=0;
   printf("Enter a binary digit:");
   scanf("%d",&bin);
   while(bin!=0)
   {
      d=bin%10;
      dec=dec+d*pow(2,i);
      bin=bin/10;
      i++;
   }
   printf("The decimal equivalent number is %d\n",dec);
   return 0;
}
