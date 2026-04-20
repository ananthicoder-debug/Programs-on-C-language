//head
#include<stdio.h>
#include<string.h>
void count(char str[500]);
//imp
#include"ccter %c is found at th position %d\n",c,i);
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
int main()
{
   char str[500];
   printf("Enter a paragraph:");
   scanf("%[^_]",str);
   count(str);
   return 0;
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
