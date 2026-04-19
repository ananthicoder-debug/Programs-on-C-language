//head
#include<stdio.h>
#include<stdlib.h>
void reverseArray(int*,int);
//imp
#include"head.h"
void reverseArray(int *array, int size) {
     int *start = array;
     int *end = array + size - 1;
     int temp;
     while (start < end) {
         temp = *start;
         *start = *end;
         *end = temp;
         start++;
         end--;
     }
 }
//app
#include"head.h"
int main() {
    int n,i;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }
    reverseArray(arr, n);
    printf("Reversed array:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
    free(arr);
    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
