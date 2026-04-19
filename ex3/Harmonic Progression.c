#include<stdio.h>
int main()
{
   int i,n;
   float hp=0;
   printf("Enetr a number:");
   scanf("%d",&n);
   for(i=1;n>=i;i++)
   {
      hp=hp+1/(float)i;
      printf("1/%d+",i);
   }
   printf("\n Sum of harmonic progression is %.2f",hp);
   return 0;
}
