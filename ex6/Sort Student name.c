//head
#include<stdio.h>
#include<string.h>
void stud(char names[][50],int n);
//imp
#include"sortstud.h"
void stud(char names[][50],int n)
{
   int i,j;
   char t[100];
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(strcmp(names[i],names[j])>0)
         {
            strcpy(t,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],t);
         }
      }
   }
   printf("The sorted list ofstudents \n");
   printf("Roll no \t students name\n");
   for (i=0;i<n;i++)
   {
          printf("%d\t\t%s\n",i+1,names[i]);
   }
}
//app
#include"sortstud.h"
int main()
{
   int i,n;
   char names[100][50];
   printf("Enter the number of names:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("Enter the name %d",i+1);
      scanf("%s", names[i]);
   }
   stud(names,n);
   return 0;
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
