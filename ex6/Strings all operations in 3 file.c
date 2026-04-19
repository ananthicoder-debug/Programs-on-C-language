//head
#include<stdio.h>
#include<string.h>
void searchCharacter(char [], char );
void concatenateStrings(char [], char [],char []);
void countCharacterOccurrences(char [], char);
void checkPalindrome(char []);
//imp
#include"ex6head.h"
void searchCharacter(char str[], char ch) {
        int found = 0,i;
        for ( i = 0; str[i] != '\0'; i++) {
                if (str[i] == ch) {
                        printf("Character '%c' found at position %d\n", ch, i+1);
                        found = 1;
                        break;
                }
        }
        if (!found) {
                printf("Character '%c' not found in the string\n", ch);
        }
}
void concatenateStrings(char str1[], char str2[],char str3[]) {
        int i = 0, j = 0;
        while (str1[i] != '\0') {
                i++;
        }
        while (str2[j] != '\0') {
                str1[i] = str2[j];
                i++;
                j++;
        }
        str1[i] = '\0';
        strcat(str3,str2);

}
void countCharacterOccurrences(char str[], char ch) {
        int i,count = 0;
        for ( i = 0; str[i] != '\0'; i++) {
                if (str[i] == ch) {
                        count++;
                }
        }
        printf("Character '%c' occurs %d times\n", ch, count);

}
void checkPalindrome(char str[]) {
        int len = strlen(str);
        int isPalindrome = 1;
        int i;
        for ( i = 0; i < len / 2; i++) {
                if (str[i] != str[len - i - 1]) {
                        isPalindrome = 0;
                        break;
                }
        }
        if (isPalindrome) {
                printf("The string '%s' is a palindrome\n", str);
        } else {
                printf("The string '%s' is not a palindrome\n", str);
        }
}
//app
#include"ex6head.h"
int main() {
        char str1[100], str2[100],str3[100], ch;
        int choice;
        printf("\nMenu:\n");
        printf("1. Search a character and report its position\n");
        printf("2. Concatenate strings without using library function\n");
        printf("3. Display the number of occurrences of the particular character\n");
        printf("4. Check whether the given string is a palindrome or not\n");
        printf("5. Exit\n");

        while (1) {

                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                case 1:
                        printf("Enter the string: ");
                        scanf("%s", str1);
                        printf("Enter the character to search: ");
                        scanf(" %c", &ch);
                        searchCharacter(str1, ch);
                        break;
                case 2:
                        printf("Enter the first string: ");
                        scanf("%s", str1);
                        printf("Enter the second string: ");
                        scanf("%s", str2);
                        strcpy(str3,str1);
                        concatenateStrings(str1, str2,str3);
                        printf("Concatenated string without using function: %s\n", str1);
                        printf("Using function %s\n",str3);
                        break;
                case 3:
                        printf("Enter the string: ");
                        scanf("%s", str1);
                        printf("Enter the character to count: ");
                        scanf(" %c", &ch);
                        countCharacterOccurrences(str1, ch);
                        break;
                case 4:
                        printf("Enter the string: ");
                        scanf("%s", str1);
                        checkPalindrome(str1);
                        break;
                case 5:
                printf("Exiting...");
                        return 0;
                default:
                        printf("Invalid choice\n");
                }
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
