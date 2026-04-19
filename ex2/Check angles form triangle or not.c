#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter three angles of the triangle:");
   scanf("%d%d%d",&a,&b,&c);
   if((a+b+c)==180&&(a>0&&b>0&&c>0))
      printf("It is a triangle");
   else
      printf("it is not a triangle");
   return 0;
}
