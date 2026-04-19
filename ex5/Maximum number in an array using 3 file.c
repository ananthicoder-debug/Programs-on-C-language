//head
#include<stdio.h>
void maxmin(int[],int);
//imp
#include"maxhead.h"
void maxmin(int a[],int s)
{
    int i,j,t;
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
//app
#include"maxhead.h"
int main()
{
    int i,j,s,c;
    printf("Enter the array size:");
    scanf("%d",&s);
    printf("Enter the array capacity: ");
    scanf("%d",&c);
    printf("Enter the array elements one by one without repetition:\n");
    int a[c];
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    maxmin( a , s );
        printf("The maximum number is %d\n",a[0]);
        printf("The second minimum number is %d\n",a[s-2]);


    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
