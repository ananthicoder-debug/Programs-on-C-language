#include<stdio.h>
#include<stdlib.h>
#define space(j) for(k=1;k<=j;k++)\
                       printf(" ");
#define line for(k=1;k<=80;k++)\
                   printf("-");
typedef struct{
   int mno;
   char name[20];
   int previous;
   int present;
   int units;
   float charge;
}ebbill;
int main()
{
   ebbill *p[50];
   int i,j,k,n;
   printf("\n How many customers?\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      p[i]=(ebbill*)malloc(sizeof(ebbill));
      printf("\nEnter meter number:");
      scanf("%d",&p[i]->mno);
      printf("\nEnter customer name:");
      scanf("%s",p[i]->name);
      printf("\nEnter previous reading:");
      scanf("%d",&p[i]->previous);
      printf("\n Enter present reading:");
      scanf("%d",&p[i]->present);
      p[i]->units=p[i]->present-p[i]->previous;
      p[i]->charge=p[i]->units*4.50;
   }
   space(30);
   printf("ASEB ELECTRICITY BILLS\n");
   line;
   printf("\n%5s","SNO");
   printf("%6s","METER NO");
   printf("%4s"," ");
   printf("%-20s","CUSTOMER NAME ");
   printf("%10s","PREVIOUS");
   printf("%10s","PRESENT");
   printf("%10s","UNITS");
   printf("%15s\n","CHARGE");
   line;
   for(i=0;i<n;i++)
   {
      printf("\n%5d",i+1);
      printf("%6d",p[i]->mno);
      printf("%4s"," ");
      printf("%-20s",p[i]->name);
      printf("%10d",p[i]->previous);
      printf("%10d",p[i]->present);
      printf("%10d",p[i]->units);
      printf("%15.2f\n",p[i]->charge);
   }
   printf("\n");
   line;
   printf("/n");
   return 0;
}
