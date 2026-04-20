//txt file
hi
hello
//main file
#include<stdio.h>
int main()
{
   FILE *fp;
   char text[200];
   int lines=0,words=0,c=0,i;
   printf("Enter a text inside a file:");
   scanf("%[^_]",text);
   fp=fopen("text.txt","w");
   if(fp==NULL)
   {
      printf("Error in opening the file\n");
      return 0;
   }
   for(i=0;text[i]!='\0';i++)
   {
      fputc(text[i],fp);
   }
   fclose(fp);
   fp=fopen("text.txt","r");
   if(fp==NULL)
   {
      printf("Error in opening the file\n");
      return 0;
   }
   char ch;
   while((ch = fgetc(fp)) != EOF)
   {
      if(ch=='\n')
      {
         lines++;
         words++;
      }
      else if(ch==' ')
      {
         words++;
      }
      c++;
   }
   printf("Number of lines:%d\n",lines);
   printf("Number of words:%d\n",words);
   printf("Number of characters:%d\n",c);
   fclose(fp);
   return 0;
}
