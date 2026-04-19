//head
#include<stdio.h>
void displayArray(int[],int);
void insertElement(int[],int,int,int);
void deleteLastElement(int[],int);
void searchByIndex(int[],int,int);
void updateByValue(int[],int,int,int);
void sortArray(int[],int);
//imp
#include"feqhead.h"
void frequency(int s,int a[]){
    int c=0 ,uc=0,f=0,i,j,count=0,str;
    int b[s];
        b[uc]=a[0];
    uc++;
    for(i=1;i<s;i++){
        for(j=0;j<uc;j++){
            if(a[i]==b[j]){
                f = 1;
            }
        }
        if(f==0) {
            b[uc]=a[i];
            uc++;
        } else {
            f=0;
        }
    }
    for(j=0;j<uc;j++){
        for(i=0;i<s;i++){
            if(b[j]==a[i]){
                count=count+1;
            }
        }
        printf("%d\t",b[j]);
        for(str=0;str<count;str++){
            printf("*");
        }
        printf("\n");
        count=0;
    }
}
//app
#include"feqhead.h"
int main()
{
    int i,j,k,s;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter the array elements one by one:\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("Frequency of elements\n");
    frequency(s,a);
    return 0;
}
//make
ex5m:ex5mimp.o ex5mapp.o
        cc ex5mimp.o ex5mapp.o -o ex5m
ex5mimp.o:ex5mimp.c ex5mhead.h
        cc -c ex5mimp.c
ex5mapp.o:ex5mapp.c ex5mhead.h
        cc -c ex5mapp.c
