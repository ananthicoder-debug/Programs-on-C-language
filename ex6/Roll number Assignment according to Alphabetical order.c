//head
[24bcs035@mepcolinux sem1lab]$cat alphahead.h
#include<stdio.h>
#include<string.h>
void sortStudents(char[][50],int);
//imp
#include"alphahead.h"
void sortStudents(char students[][50], int n) {
    char temp[50];
    int i,j;
    for ( i = 0; i < n ; i++) {
        for ( j = i + 1; j < n; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                strcpy(temp, students[i]);
                strcpy(students[i], students[j]);
                strcpy(students[j], temp);
            }
        }
    }
}
//app
#include"alphahead.h"
int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    char students[n][50];
    for ( i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i]);
    }
    sortStudents(students, n);
    printf("\nRoll Numbers assigned according to alphabetical order:\n");
    for ( i = 0; i < n; i++) {
        printf("Roll Number %d: %s\n", i + 1, students[i]);
    }
    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c


