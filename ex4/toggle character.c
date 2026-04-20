//head
#include<stdio.h>
int upper(int ch);
int lower(int ch);
//imp
#include"case.h"
int upper(int ch){
   ch=ch-32;
   return ch;
}
int lower(int ch){
   ch=ch+32;
   return ch;
}
//app
#include"case.h"
int main()
{
        int n,i;
        char ch,l;
        printf("Enter the number of character:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
           printf("Enter a character:");
           scanf(" %c",&ch);
           if(ch>='A' && ch<='Z'){
              l=lower(ch);
              printf("Equivalent lower :%c\n",l);
           }
           else if(ch>='a' && ch<='z'){
              l=upper(ch);
              printf("Equivqlent upper:%c\n",l);
           }
           else{
              printf("Not an alphabet\n");
           }
        }
        return 0;
}
//make
case : caseimp.o caseapp.o
        cc caseimp.o caseapp.o -o case
caseimp.o : caseimp.c case.h
        cc -c caseimp.c
caseapp.o : caseapp.c case.h
        cc -c caseapp.c
