//head
#include<stdio.h>
void swap(int*,int*);
//imp
#include"head.h"
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
//app
#include"head.h"
int main()
{
    int n1,n2;
    int* p1=&n1;
    int* p2=&n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    *p1=n1;
    *p2=n2;
    swap(p1,p2);
    printf("After swapping\nNum1=%d\n",n1);
    printf("Num2=%d",n2);
    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c

