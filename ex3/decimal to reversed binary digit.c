#include<stdio.h>
int main()
{
   int n,bnum=0,r=0,rbnum=0,x;
   printf("Enter the decimal number:");
   scanf("%d",&n);
   x=n;
   if(n%2==0)
   {
      rbnum=1;
   }
   while(n!=0)
   {
      r=n%2;
      rbnum=rbnum*10+r;
      n=n/2;
   }
   printf("Reversed binary no: %d\n",rbnum);
   while(rbnum!=0)
   {
      r=rbnum%10;
      bnum=bnum*10+r;
      rbnum=rbnum/10;
   }
   if(x%2==0){
      bnum=bnum/10;
   }
   printf("Binary number= %d\n",bnum);
   return 0;
}
