//head
#include"head.h"
int fibbo(int n)
{
   if(n<=1)
      return n;
   else
      return fibbo(n-1)+fibbo(n-2);
}
//imp
#include"head.h"
int fibbo(int n)
{
   if(n<=1)
      return n;
   else
      return fibbo(n-1)+fibbo(n-2);
}
//app
#include"head.h"
int main()
{
   int n,f;
   printf("Enter a value for n:");
   scanf("%d",&n);
   f=fibbo(n);
   printf("The %dth term of fibbonacci series is %d",n,f);
   return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
