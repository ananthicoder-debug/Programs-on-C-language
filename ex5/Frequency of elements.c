//head
#include<stdio.h>
void frequency(int,int[]);
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
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c

