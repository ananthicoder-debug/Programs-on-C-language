//head
#include<stdio.h>
int PrimeNum(int);
int fibbo(int);
float power(float,float);
float Diameter(float);
float Area(float);
float Circumference(float);
char Toggle(char);

//imp
#include"head.h"
char Toggle(char c)
{
   if(c>='A' && c<='Z')
   {
      return c+32;
   }
   else if(c>='a' && c<='z')
   {
    return c-32;
   }
   else{
      return c;
   }
}
//app
#include"head.h"
int main()
{
   int len,i;
   char c;
   printf("Enter the length of your string:");
   scanf("%d",&len);
   printf("Enter your string:");
   for(i=0;i<len;i++){
      scanf(" %c",&c);
     printf("%c", Toggle(c));
   }
   printf(" is the toggled string");
   return 0;
  }
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c

