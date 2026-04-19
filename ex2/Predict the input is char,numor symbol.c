#include<stdio.h>
int main()
{
   char a;
   int b;
   printf("Enter a value(int,char,num or spchar):");
   scanf("%c",&a);
   b=(int)a;
   if(b>=48 && b<=57)
   {
      printf("%c(%d) is a number",a,a);
    }
   else if(b>=65 && b<=90)
   {
      printf("%c(%d) is a upper case",a,a);
   }
   else if(b>=97 && b<=122)
   {
      printf("%c(%d) is a lower case",a,a);
   }
   else
   {
      printf("%c(%d) is a special character",a,a);
   }
   return 0;
}
