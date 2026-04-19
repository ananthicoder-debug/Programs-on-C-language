# include<stdio.h>
int main()
{
   int a,b;
   char ch;
   printf("Enter a valid expression:");
   scanf("%d%c%d",&a,&ch,&b);
   switch(ch)
   {
      case '+':
         printf("%d+%d=%d",a,b,a+b);
         break;
      case '-':
         printf("%d-%d=%d",a,b,a-b);
         break;
      case '*':
         printf("%d*%d=%d",a,b,a*b);
         break;
      case '/':
         printf("%d/%d=%d",a,b,a/b);
         break;
      case '%':
         printf("%d%c%d=%d",a,ch,b,a%b);
         break;
      default:
         printf("Invalid express");
   }
   return 0;
}
