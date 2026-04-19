//head
#include<stdio.h>
void displayArray(int[],int);
void insertElement(int[],int,int,int);
void deleteLastElement(int[],int);
void searchByIndex(int[],int,int);
void updateByValue(int[],int,int,int);
void sortArray(int[],int);
//imp
#include"ex5mhead.h"
void displayArray(int array[], int size) {
        int i;
        printf("Array: ");
        for ( i = 0; i < size; i++) {
                printf("%d ", array[i]);
        }
        printf("\n");
}
void insertElement(int array[], int element, int index, int size) {
        int i;
        for ( i = size; i > index; i--) {
                array[i] = array[i - 1];
        }
        array[index] = element;
        (size)++;
}
void deleteLastElement(int array[], int size) {
        int i;
        if (size > 0) {
                size=size-1;
                for(i=0; i<size; i++) {
                        printf("%d  ",array[i]);
                }
                printf("\n");
        } else {
                printf("Array is already empty\n");
        }
}
void searchByIndex(int array[], int size, int index) {
        if (index < 0 || index >size) {
                printf("Invalid index\n");
        } else {
                printf("Element at index %d is %d\n", index+1, array[index]);
        }
}
void updateByValue(int array[], int size, int oldValue, int newValue) {
        int i;
        for ( i = 0; i < size; i++) {
                if (array[i] == oldValue) {
                        array[i] = newValue;
                        printf("Updated value %d to %d\n", oldValue, newValue);
                        return;
                }
        }
        printf("Value %d not found in array\n", oldValue);
}
void sortArray(int array[], int size) {
        int i,j;
        for ( i = 0; i < size - 1; i++) {
                for (j = 0; j < size - 1 - i; j++) {
                        if (array[j] > array[j + 1]) {
                                int temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                        }
                }
        }
}
//imp
#include"ex5mhead.h"
int main() {
        int array[100];
        int choice, element, index, oldValue, newValue,i,size;
                printf("\nMenu:\n");
                printf("1. Insert an element at any given position\n");
                printf("2. Delete the last element\n");
                printf("3. Search by index\n");
                printf("4. Update by value\n");
                printf("5. Sort the array in ascending order\n");
                printf("6. Display array\n");
                printf("7. Exit\n");

        do {
                printf("Enter your choice:");
                scanf("%d",&choice);
                switch (choice) {
                case 1:
                         printf("Enter the size of array:");
                         scanf("%d",&size);
                         printf("Enter array elements:");
                          for(i=0; i<size; i++) {
                                 scanf("%d",&array[i]);
                                }
                        printf("Enter element to insert: ");
                        scanf("%d", &element);
                        printf("Enter index: ");
                        scanf("%d", &index);
                        index--;
                        insertElement(array, element, index, size);
                        displayArray(array, size);
                        break;
                case 2:
                         printf("Enter the size of array:");
                        scanf("%d",&size);
                        printf("Enter array elements:");
                        for(i=0; i<size; i++) {
                         scanf("%d",&array[i]);
                        }
                         printf("Before deletion  ");
                        displayArray(array, size);
                        printf("Array after deletion: ");
                        deleteLastElement(array, size);
                        break;
                case 3:
                        printf("Enter the size of array:");
                         scanf("%d",&size);
                         printf("Enter array elements:");
                         for(i=0; i<size; i++) {
                                 scanf("%d",&array[i]);
                        }
                        printf("Enter index to search: ");
                        scanf("%d", &index);
                        index--;
                        displayArray(array, size);
                        searchByIndex(array, size, index);
                        break;
                case 4:
                         printf("Enter the size of array:");
                         scanf("%d",&size);
                         printf("Enter array elements:");
                         for(i=0; i<size; i++) {
                          scanf("%d",&array[i]);
                        }
                        printf("Enter value to update: ");
                        scanf("%d", &oldValue);
                        printf("Enter new value: ");
                        scanf("%d", &newValue);
                        updateByValue(array, size, oldValue, newValue);
                        displayArray(array, size);
                        break;
                case 5:
                        printf("Enter the size of array:");
                         scanf("%d",&size);
                         printf("Enter array elements:");
                         for(i=0; i<size; i++) {
                                 scanf("%d",&array[i]);
                         }
                        sortArray(array, size);
                        printf("Array sorted in ascending order\n");
                        displayArray(array, size);
                        break;
                case 6:
                        printf("Enter the size of array:");
                        scanf("%d",&size);
                         printf("Enter array elements:");
                         for(i=0; i<size; i++) {
                                  scanf("%d",&array[i]);
                         }
                        displayArray(array, size);
                        break;
                case 7:
                        return 0;
                default:
                        printf("Invalid choice\n");
                }
        }while(choice<8);

        return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c

