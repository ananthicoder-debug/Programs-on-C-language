#include<stdio.h>
#include<math.h>
int main()
{
   int num,digit,rev=0,t;
   printf("Enter a number ");
   scanf("%d",&num);
   t=num;
   while(num)
   {
      digit=num%10;
      rev=(rev*10)+digit;
      num=num/10;
   }
   printf("The Reverse of the number is %d\n",rev);
   if(t==rev)
   {
      printf("The number is a palindrome\n");
   }
   else
   {
      printf("The number is not a palindrome\n");
   }
   return 0;
}
