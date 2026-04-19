//head
#include<stdio.h>
#include<ctype.h>
void countCharacters(char []);
//imp
#include"letterhead.h"
void countCharacters(char str[]) {
        int letters = 0, numbers = 0, specialChars = 0;
        int i;
        for ( i = 0; str[i] != '\0'; i++) {
                if (isalpha(str[i])) {
                        letters++;
                } else if (isdigit(str[i])) {
                        numbers++;
                } else {
                        specialChars++;
                }
        }

        printf("Letters: %d\n", letters);
        printf("Numbers: %d\n", numbers);
        printf("Special Characters: %d\n", specialChars);
}
//app
#include"letterhead.h"
int main() {
        char str[100];

        printf("Enter a sentence: ");
        scanf("%[^\n]",str);
        countCharacters(str);

        return 0;
}
//make
mul:imp.o app.o
        cc imp.o app.o -o mul
imp.o:imp.c head.h
        cc-c mulimp.c
app.o:app.c head.h
        cc -c app.c


