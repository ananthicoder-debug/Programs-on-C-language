//head
#include <stdio.h>
#include<stdlib.h>
void rect(float *len,float *bread,float *area,float *perimeter);
int *sortdescending(int *arr,int n);
int *sortascending(int *arr,int n);
char* concatenateStrings(char* str1, char* str2) ;
void inputMatrix(int** matrix, int rows, int cols) ;
void addMatrices(int** matrix1, int** matrix2, int** result, int rows, int cols) ;
void displayMatrix(int** matrix, int rows, int cols) ;
//imp
#include"cat.h"
char* concatenateStrings(char* str1, char* str2){
   int len1 = 0, len2 = 0;
   while (str1[len1] != '\0'){
      len1++;
   }
   while (str2[len2] != '\0'){
      len2++;
   }
   char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
   if (result == NULL) {
      return 0;
   }
   char* temp = result;
   while (*str1 != '\0') {
      *temp++ = *str1++;
   }
   while (*str2 != '\0') {
      *temp++ = *str2++;
   }
   *temp = '\0';
   return result;
}
//app
#include"cat.h"
int main(){
   char* str1 = (char*)malloc(100 * sizeof(char));
   char* str2 = (char*)malloc(100 * sizeof(char));
   if (str1 == NULL || str2 == NULL) {
      printf("Memory allocation failed!\n");
      return 1;
   }
   printf("Enter the first string: ");
   scanf("%s", str1);
   printf("Enter the second string: ");
   scanf("%s", str2);
   char* result = concatenateStrings(str1, str2);
   if (result != NULL) {
      printf("Concatenated string: %s\n", result);
      free(result);
   }
   free(str1);
   free(str2);
   return 0;
}
//make
out : imp.o app.o
        cc imp.o app.o -o out
imp.o : imp.c head.h
        cc -c imp.c
app.o : app.c head.h
        cc -c app.c
