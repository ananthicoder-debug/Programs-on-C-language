//head
#include <stdio.h>
#include <stdlib.h>
void copyString(char*,char*);
//imp
void copyString(char *source, char *destination) {
     while (*source) {
         *destination = *source;
         source++;
         destination++;
     }
     *destination = '\0';
 }
//app
#include"ex74head.h"
int main() {
    char *source;
    char *destination;
    int length;

    printf("Enter the length of the string: ");
    scanf("%d", &length);
    source = (char *)malloc((length + 1) * sizeof(char));
    if (source == NULL) {
        printf("Memory allocation failed for source string!\n");
        return 1;
    }

    destination = (char *)malloc((length + 1) * sizeof(char));
    if (destination == NULL) {
        printf("Memory allocation failed for destination string!\n");
        free(source);
        return 1;
    }
    printf("Enter the source string: ");
    scanf("%s", source);
    copyString(source, destination);
    printf("Copied string: %s\n", destination);
    free(source);
    free(destination);

    return 0;
}

//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c

