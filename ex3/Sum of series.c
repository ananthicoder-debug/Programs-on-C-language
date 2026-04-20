
#include<stdio.h>
int main()
{
   int n,sum=0,i=1,j=1;
   printf("Enter a n number of series:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      if(i%2==0){
         sum-=j;
         printf("-%d",j);
      }
      else
      {
         sum+=j;
         printf("+%d",j);
      }
      j+=2;
}
printf("\nThe sum of the series %d\n",sum);
return 0;
}
