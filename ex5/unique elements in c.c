//head
#include<stdio.h>
void unique(int a[],int n);
//imp
#include"unique.h"
void unique(int a[],int n){
   int i,j,p=0;
   for(i=0;i<n;i++)
   {
      int u=0;
      for(j=0;j<n;j++)
      {
        if(a[i]==a[j] && i!=j)
        {
           u=1;
           break;
        }
      }
   if(u==0)
   {
      printf("The unique elements are :");
      printf("%d\n",a[i]);
      p=1;
   }
   }
   if(!p)
   {
      printf("No unique elements\n");
   }
   }
[24bcs004@mepcolinux ex5]$cat uniqueapp.c
#include"unique.h"
int main()
{
   int n,i;
   printf("Enter number of elements :");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
      printf("Enter an element %d :",i+1);
      scanf("%d",&arr[i]);
   }
   unique(arr,n);
   return 0;
}
//app
#include"unique.h"
int main()
{
   int n,i;
   printf("Enter number of elements :");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
      printf("Enter an element %d :",i+1);
      scanf("%d",&arr[i]);
   }
   unique(arr,n);
   return 0;
}
//makeout : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
