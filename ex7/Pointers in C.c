#include <stdio.h>
int main()
{
    int num1=10,num2=20;
    int *ptr=&num1;
    printf("Value of num1:%d\n",num1);
    printf("Address of num1: %p %u %x\n",&num1,&num1,&num1);
    printf("Address of num1 using pointer:%p\n",ptr);
    printf("Value of ptr:%p\n",ptr);
    printf("Value pointed to by ptr: %d\n",*ptr);
    printf("Address of ptr: %p\n",&ptr);
    *ptr =num2;
    printf("Modified value of num1: %d\n",num1);
    ptr=&num2;
    printf("Value of num2:%d\n",num2);
    printf("Address of num2: %p %u %x\n",&num2,&num2,&num2);
    printf("Address of num2 using pointer:%p\n",ptr);
    printf("Value of ptr:%p\n",ptr);
    printf("Value pointed to by ptr :%d\n",*ptr);
    printf("Address of ptr: %p\n",&ptr);
    return 0;
}
