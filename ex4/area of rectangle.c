//head
#include<stdio.h>
int area(int l,int b);
int perimeter(int l,int b);
//imp
int perimeter(int l,int b);
int area(int l,int b)
{
   return l*b;
}
int perimeter(int l,int b)
{
   return 2*(l+b);
}
//app
int perimeter(int l,int b);
int area(int l,int b)
{
   return l*b;
}
int perimeter(int l,int b)
{
   return 2*(l+b);
}
[24bcs004@mepcolinux ex4]$cat rectapp.c
#include"rect.h"
int main()
{
   int l,b;
   printf("Enter the length of rectangle:");
   scanf("%d",&l);
   printf("Enter the breadth of rectangle:");
   scanf("%d",&b);
   printf("Area of rectangle is %d\n",area(l,b));
   printf("Perimeter of rectangle is %d\n",perimeter(l,b));
   return 0;
}
//make
rect :rectimp.o rectapp.o
        cc rectimp.o rectapp.o -o rect
rectimp.o :rectimp.c rect.h
        cc -c rectimp.c
rectapp.o :rectapp.c rect.h
        cc -c rectapp.c
