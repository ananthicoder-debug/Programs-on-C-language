#include<stdio.h>
struct Record{
   char name[50];
   char address[100];
   char phone[15];
};
int main() {
   FILE *fp;
   struct Record records[100], r;
   char choice;
   int option, count, i, j, found;
   char oldPhone[15], newAddress[100], newPhone[15];
   fp = fopen("telephone_directory.dat", "rb+");
   if (fp == NULL) {
      fp = fopen("telephone_directory.dat", "wb+");
      if (fp == NULL) {
         printf("Error: Unable to open file.\n");
         return 1;
      }
   }
   while (1) {
      printf("\n*** Telephone Directory ***\n");
      printf("1. Add Records\n");
      printf("2. Display Records\n");
      printf("3. Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &option);
      if (option == 1) {
         do {
            printf("Enter name: ");
            scanf(" %[^\n]s", r.name);
            printf("Enter address: ");
            scanf(" %[^\n]s", r.address);
            printf("Enter phone number: ");
            scanf("%s", r.phone);
            fwrite(&r, sizeof(struct Record), 1, fp);
            printf("Do you want to add another record? (y/n): ");
            scanf(" %c", &choice);
         } while (choice == 'y' || choice == 'Y');
      }else if (option == 2) {
         rewind(fp);
         printf("\n%-20s %-30s %-15s\n", "Name", "Address", "Phone Number");
         printf("-----------------\n");
         while (fread(&r, sizeof(struct Record), 1, fp)) {
            printf("%-20s %-30s %-15s\n", r.name, r.address, r.phone);
         }
      } else if (option == 3) {
         fclose(fp);
         printf("Exiting program.\n");
         return 0;
      }
   }
return 0;
}
