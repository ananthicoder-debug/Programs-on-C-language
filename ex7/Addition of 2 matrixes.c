//head
#include<stdio.h>
#include<stdlib.h>
void read(int m,int*a[m],int r,int c);
void sums(int m,int *a[m],int *b[m],int*s[m],int r,int c);
void write(int m,int*a[m],int r,int c);
//imp
#include"add.h"
void read(int m,int*a[m],int r,int c)
{
   int i,j;
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
         printf("Enter the element for the matrix position %d%d:",i,j);
         scanf("%d",(*(a+i)+j));
      }
   }
}
void write(int m,int*a[m],int r,int c)
{
   int i,j;
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
          printf("%d",*(*(a+i)+j));
          printf("\t");
       }
       printf("\n");
    }

}
void sums(int m,int *a[m],int*b[m],int*s[m],int r,int c)
{
   int i,j;
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
          *(*(s+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
       }
    }
}
//app
#include"add.h"
int main()
{
   int i,r,c,m;
   printf("Enter the length of an array:");
   scanf("%d",&m);
   int*a[m],*b[m],*s[m];
   printf("How many rows?");
   scanf("%d",&r);
   printf("How many coloumns?");
   scanf("%d",&c);
   for(i=0;i<r;i++)
   {
      a[i]=(int*)malloc(c*sizeof(int));
      b[i]=(int*)malloc(c*sizeof(int));
      s[i]=(int*)malloc(c*sizeof(int));
   }
   printf("\n First Matrix\n");
   read(m,a,r,c);
   printf("\n Second matrix\n");
   read(m,b,r,c);
   sums(m,a,b,s,r,c);
   write(m,s,r,c);
   return 0;
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
