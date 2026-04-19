//head
#include<stdio.h>
#include<ctype.h>
void toggleCase(char[]);
//imp
#include"toghead.h"
void toggleCase(char str[])
{
   int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}
//app
#include"toghead.h"
int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%s", str);

    toggleCase(str);

    printf("Toggled case: %s\n", str);

    return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c
