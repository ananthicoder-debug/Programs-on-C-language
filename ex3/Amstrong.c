#include<stdio.h>
#include<math.h>
int main()
{
   int n,r,s,v,i=0,y;
   printf("Enter a number:");
   scanf("%d",&n);
   y=n;
   while(y!=0)
   {
      y=y/10;
      i++;
   }
   v=n;
   while(n!=0)
   {
      r=n%10;
      n=n/10;
      s=s+pow(r,i);
   }
   if(v==s)
   {
      printf("%d is an armstrong number",s);
   }
   else
      printf("%d is not an armstrong number",v);
   return 0;
}
