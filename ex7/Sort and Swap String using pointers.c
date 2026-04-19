//head
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortStrings(char **, int );
void swap(char **, char **);
//imp
#include"head.h"
void swap(char **str1, char **str2) {
     char *temp = *str1;
     *str1 = *str2;
     *str2 = temp;
 }
 void sortStrings(char **strings, int n) {
    int i,j;
    for (i = 0; i < n - 1; i++) {
         for (j = i + 1; j < n; j++) {
             if (strcmp(strings[i], strings[j]) > 0) {
                 swap(&strings[i], &strings[j]);
             }
         }
     }
 }
//app
#include"head.h"
int main() {
    int n,i,j;
    char **strings;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    strings = (char **)malloc(n * sizeof(char *));
    if (strings == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
      for ( i = 0; i < n; i++) {
        char temp[100];
        printf("Enter string %d: ", i + 1);
        scanf("%s", temp);
        strings[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if (strings[i] == NULL) {
            printf("Memory allocation failed for string %d!\n", i + 1);
            for (j = 0; j < i; j++) {
                free(strings[j]);
            }
            free(strings);
            return 1;
        }
        strcpy(strings[i], temp);
    }
    sortStrings(strings, n);
    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }
    free(strings);
    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c

