//head
#include<stdio.h>
void minandsecondmax(int a[],int n);
//imp
#include"minmax.h"
void minandsecondmax(int a[],int n)
{
   if(n<2)
   {
      printf("Array need atleast two elements\n");
   }
   int i,j,min=a[0],max1=a[0],m2,max2;
   for( i=0;i<n;i++)
   {
      if(a[i]<min)
      {
         min=a[i];
      }
      if(a[i]>max1)
      {
         max1=a[i];
      }
   }
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if(a[i]<a[j])
       {
          int t=a[i];
          a[i]=a[j];
          a[j]=t;
       }
    }
   }
   printf("The minimum element is %d \n",min);
   if(m2==max1)
   {
      printf("No second maximum elements exists \n");
   }
   else
   {
      printf("The first maximum element is %d\n",max1);
      printf("The second maximum element is %d\n",a[1]);
   }
}
//app
#include"minmax.h"
int main()
{
   int i,n,a[n];
   printf("Enter number of elements:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("Enter an element %d :",i+1);
      scanf("%d",&a[i]);
   }
   minandsecondmax(a,n);
   return 0;
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
