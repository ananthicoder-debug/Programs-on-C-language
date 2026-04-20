//head
#include<stdio.h>
void matmul(int r1,int r2,int c1,int c2,int m1[r1][c1],int m2[r2][c2],int res[r1][c2]);
void transpose(int r1,int c1,int a[r1][c1]);
//imp
#include"matrix.h"
void matmul(int r1,int r2,int c1,int c2,int m1[r1][c1],int m2[r2][c2],int res[r1][c2])
{
   int i,j,k;
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c2;j++)
      {
         res[i][j]=0;
         for(k=0;k<c1;k++)
         {
            res[i][j]+=m1[i][k]*m2[k][j];
         }
      }
   }
   printf("The resulant matrix is:\n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
       {
          printf("%d\t",res[i][j]);
       }
       printf("\n");
    }
}
void transpose(int r1,int c1,int a[r1][c1])
   {
      int i,j;
      for(i=0;i<c1;i++)
      {
         for(j=0;j<r1;j++)
         {
            a[i][j]=a[j][i];
         }
      }
   printf("The resulantant matrix is :\n");
    for(i=0;i<c1;i++)
    {
       for(j=0;j<r1;j++)
       {
          printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
   }

//app
#include"matrix.h"
int main()
{
   int c,r1,c1,r2,c2,i,j;
   printf("Enter number of rows and coloums for matrix 1:");
   scanf("%d %d",&r1,&c1);
   printf("Enter no rows and coloums for matrix 2:");
   scanf("%d %d",&r2,&c2);
   int m1[r1][c1],m2[r2][c2],res[r1][c2];
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
         printf("Enter the value of matrix1:");
         scanf("%d",&m1[i][j]);
      }
      printf("\n");
   }
   for(i=0;i<r2;i++)
   {
      for(j=0;j<c2;j++)
      {
         printf("Enter the value of matrix2:");
         scanf("%d",&m2[i][j]);
      }
      printf("\n");
   }
   printf("\n The matrix operations are:\n");
   printf("1.Matrix Multiplication \n");
   printf("2.Transpose of a matrix \n");
   printf("3.Exit\n");
   printf("Enter your choice:");
   scanf("%d",&c);
   switch(c)
   {
      case 1:
         if(c1==r2)
         {
            matmul(r1,r2,c1,c2,m1,m2,res);
         }
         else
            printf("Matrix multiplication is not possible \n");
         break;
      case 2:
         printf("The transpose of matrix1 is:\n");
         transpose(r1,c1,m1);
         printf("The transpose of matrix2 is:\n");
         transpose(r2,c2,m2);
         break;
      case 3:
         printf("Exiting the program.....\n");
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
