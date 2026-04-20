//head
#include<stdio.h>
void insert(int a[],int size);
void deleteelement(int a[],int size);
void search(int a[],int size);
void update(int a[],int size);
void sort(int a[],int size);
//imp
#include"operate.h"
void insert(int a[],int size){
   int i,e;
   printf("Enter an number to insert at last:");
   scanf(" %d",&e);
   a[size]=e;
   printf("The modified array is:");
   for(i=0;i<=size;i++){
           printf("%d",a[i]);
           printf("\t");
   }
   printf("\n");
}
void deleteelement(int a[],int size){
   int p,i;
   printf("Enter position to delete\n");
   scanf("%d",&p);
   if(p>0 && p<size){
      for (i=p;i<size;i++){
         a[i]=a[i++];
      }
      size--;
   }
   else
      {
         printf("Invalid option\n");
      }
   printf("The modified array is:");
   for(i=0;i<size;i++){
      printf("%d",a[i]);
      printf("\t");
   }
   printf("\n");
}
void search(int a[],int size){
   int i, v,f=0;
   printf("Enter value to search:");
   scanf("%d",&v);
   for(i=0;i<size;i++){
      if(a[i]==v){
         printf("Value %d found at index %d \n",v,i);
         f=1;
         break;
      }
   }
   printf("The modified array is:");
   for(i=0;i<size;i++){
      printf("%d",a[i]);
      printf("\t");
   }
   printf("\n");
}
void update(int a[],int size){
   int i,in,new;
   printf("Enter index to update:");
   scanf("%d",&in);
   printf("Enter a new value for the index:");
   scanf("%d",&new);
   a[in]=new;
   printf("The modified array is:");
   for(i=0;i<size;i++){
      printf("%d",a[i]);
      printf("\t");
   }
   printf("\n");
}
void sort(int a[],int size){
   int i,j,t;
   for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){
         if(a[i]<a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
      }
   }
   printf("The modified array is:");
   for(i=0;i<size;i++){
      printf("%d",a[i]);
      printf("\t");
   }
   printf("\n");
}
//app
#include"operate.h"
int main()
{
   int n,c,i;
   printf("Enter number of elements in an array:");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
      printf("Enter a element %d :",i+1);
      scanf("%d",&arr[i]);
   }

      printf("\n Array operations menu:\n");
      printf("1.Insert a element at the last\n");
      printf("2.Delete an element at specific position\n");
      printf("3.Search by value\n");
      printf("4.Update by index\n");
      printf("5.Sorrt array in desending order\n");
      printf("6.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&c);
      switch(c)
      {
         case 1:
            insert(arr,n);
            break;
         case 2:
            deleteelement(arr,n);
            break;
         case 3:
            search(arr,n);
            break;
         case 4:
            update(arr,n);
            break;
         case 5:
            sort(arr,n);
            break;
         case 6:
            printf("Exiting the program\n");
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
