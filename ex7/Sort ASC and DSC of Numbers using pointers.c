//head
#include<stdio.h>
#include<stdlib.h>
void sortasce(int*arr,int n);
void sortdesc(int*arr,int n);
//imp
#include"sort.h"
void sortasce(int*arr,int n)
{
   int t, i,j;
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(arr[j]<arr[i])
         {
            int t=*(arr+j);
            *(arr+j)=*(arr+i);
            *(arr+i)=t;
         }
      }
   }
    printf("ASENDING ORDER :");
   for(i=0;i<n;i++){
      printf("%d",*(arr+i));
      printf("\t");
   }
   printf("\n");
}
void sortdesc(int*arr,int n)
{
   int t ,i,j;
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(arr[j]>arr[i])
         {
        int t=*(arr+j);
         *(arr+i)=*(arr+j);
         *(arr+j)=t;
      }
   }
   }
   printf("DESENDING ORDER:");
   for(i=0;i<n;i++){
      printf("%d",*(arr+i));
       printf("\t");
   }
    printf("\n");
}
//app
#include"sort.h"
int main()
{
   int *arr,n,choice,i;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int*));
   for(i=0;i<n;i++)
   {
      printf("Enter a element %d:",i+1);
      scanf("%d",(arr+i));
   }
   printf("Menu for array operations\n");
   printf("1.sorting array in asending order\n");
   printf("2.sorting in descending order\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
         printf("Ascending order :");
         sortasce(arr,n);
         break;
      case 2:
         printf("Descending order:");
         sortdesc(arr,n);
         break;
      default:
         printf("Invalid choice\n");
   }
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
