//head
#include<stdio.h>
#include<string.h>
struct TV{
   char model[50];
   int year;
   int price;
};
void adddetails(struct TV TVs[],int n);
void updatedetails(struct TV TVs[],int n,int index);
void sortdetails(struct TV TVs[],int n);
void maxprice(struct TV TVs[],int n);
void displaydetails(struct TV TVs[],int n);
//imp
#include"head.h"
void adddetails(struct TV TVs[],int n){
   int i;
   for(i=0;i<n;i++){
      printf("\n Enter details for TV %d:\n",i+1);
      printf("Enter model:");
      scanf("%s",TVs[i].model);
      printf("Enter year:");
      scanf("%d",&TVs[i].year);
      printf("Enter price:");
      scanf("%d",&TVs[i].price);
   }
}
void updatedetails(struct TV TVs[],int n,int index){
   if(index>=0 && index<n){
      printf("\nupdating details for TV %d:\n",index+1);
      printf("Enter updated model:");
      scanf("%s",TVs[index].model);
      printf("Enter updated year:");
      scanf("%d",&TVs[index].year);
      printf("Enter updated price:");
      scanf("%d",&TVs[index].price);
   }
   else{
      printf("Invalid index!\n");
   }
}
void sortdetails(struct TV TVs[],int n){
   struct TV temp;
   int j,i;
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(TVs[i].price>TVs[j].price){
            temp=TVs[i];
            TVs[i]=TVs[j];
            TVs[j]=temp;
         }
      }
   }
}
void maxprice(struct TV TVs[],int n){
   int max=0;
   int i;
   for(i=0;i<n;i++){
      if(TVs[i].price>TVs[max].price){
         max=i;
 }
 }
 printf("\nTelevisions with maximum price:\nModel:%s,Year:%d,Price:%d\n",TVs[max].model,TVs[max].year,TVs[max].price);
 }
void displaydetails(struct TV TVs[],int n){
   printf("\nTVS details:\n");
   int i;
   for(i=0;i<n;i++){
      printf("Module:%s,year:%d,price:%d\n",TVs[i].model,TVs[i].year,TVs[i].price);
   }
}
//app
#include"head.h"
int main(){
   int no=0,num,n,choice,index;
   printf("Enter the no of Televisions:");
   scanf("%d",&n);
   struct TV TVs[n];
   adddetails(TVs,n);
   no+=n;
   do{
      printf("\n\t MENU \t\n");
      printf("1.Add TV details\n");
      printf("2.Update TV details\n");
      printf("3.Sort TV details\n");
      printf("4.TV with maximum price\n");
      printf("5.Display all TV details\n");
      printf("6.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&choice);
      switch(choice){
         case 1:
            printf("Enter the no of TV details to be added:");
            scanf("%d",&no);
            adddetails(TVs,no);
            printf("Details added\n");
            no+=num;
            break;
         case 2:
            printf("Enter the index to update TV details:");
            scanf("%d",&index);
            updatedetails(TVs,no,index);
            printf("Details updated\n");
            break;
         case 3:
            sortdetails(TVs,no);
            printf("TVS details are sorted\n");
            displaydetails(TVs,no);
            break;
         case 4:
            maxprice(TVs,no);
            break;
         case 5:
            displaydetails(TVs,no);
            break;
         case 6:
            printf("Exiting...\n");
            return 0;
         default:
            printf("Invalid choice,try again\n");
      }
   }while(choice!=6);
   return 0;
}
//make
tv :imp.o app.o
        cc imp.o app.o -o tv
imp.o :imp.c head.h
        cc -c ex8imp.c
app.o :app.c head.h
        cc -c ex8app.c
