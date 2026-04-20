//head
#include<stdio.h>
#include<string.h>
void len(char str[50]);
void rev(char sre[50]);
void pos(char str[50]);
void cop(char str[50],char str2[50]);
//imp
#include"string.h"
void len(char str[50])
{
   int i,len=0;
   printf("\nWithout using library function");
   for(i=0;str[i]!='\0';i++)
   {
      len++;
   }
   printf("\nLength of the string %d",len);
   printf("\nWith using library function");
   printf("\nThe length of the string is %d \n",strlen(str));
}
void rev(char str[50])
{
   int j,i,n,end,start;
   char rev[50];
   printf("\nWithout using library operator");
   for(i=0;str[i]!='\0';i++)
   {
      n++;
   }
   for(i=0;i<n;i++){
      rev[i]=str[n-i-1];
   }
   rev[n]='\0';
   printf("\nThe reverse of the string is ");
   printf("%s\n",rev);
}
void pos(char str[50])
{
   int i,p=0;
   char c;
   printf("\nWith using library operator");
   printf("\nEnter a character to search");
   scanf("%c",&c);
   for(i=0;i<strlen(str);i++)
   {
      if(c==str[i])
      {
         printf("\nThe character %c is found at th position %d\n",c,i);
         p=1;
      }
   }
   printf("\nWithout using library operrator");
   for(i=0;str[i]!='\0';i++)
   {
      if(c=str[i])
      {
         printf("\nThe character %c is found at th position %d\n",c,i);
      }
   }
   if(p)
   {
      printf("\nThe given character is not in the string\n");
   }
}
void cop(char str[50],char str2[50])
{
   int i;
   printf("Orginal string %s\n",str);
   printf("\nWith using library operator");
   printf("\nS2=%s",strcpy(str2,str));
   printf("\nWithout using library operrator");
   for(i=0;str[i]!='\0';i++)
   {
      str2[i]=str[i];
   }
   printf("\n Copied string S2=%s\n",str2);
}
//app
#include"string.h"
int main()
{
   int n;
   char str[50],str2[50];
   printf("Enter a string:");
   scanf("%[^\n]",str);
   printf("String Operations");
   printf("\n1.Length of the string");
   printf("\n2.Reverse of the string");
   printf("\n3.Position of the string");
   printf("\n4. Copy  of the string");
   do{
   printf("\nEnter your choice:");
   scanf("%d",&n);
   switch(n)
   {
      case 1:
         len(str);
         break;
      case 2:
         rev(str);
         break;
      case 3:
         pos(str);
         break;
      case 4:
         cop(str,str2);
         break;
   default:
      printf("Invalid Choice");
   }
   }while(n!=4);
return 0;
}
//make
string :stringimp.o stringapp.o
        cc stringimp.o stringapp.o -o string
stringimp.o :stringimp.c string.h
        cc -c stringimp.c
stringapp.o :stringapp.c string.h
        cc -c stringapp.c
