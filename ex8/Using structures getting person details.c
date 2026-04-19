#include<stdio.h>
struct health {
        float height;
        float weight;
        float bmi;
        char name[50];
        int id;
};
int main() {
        struct health h[50];
        struct health temp;
        int f=0,c=0,ch,id,i,j;
        printf("\tMENU\n");
        printf("1.Add a Person Details\n");
        printf("2.Update the Person\n");
        printf("3.Display the Person Details By Ascending order of height\n");
        printf("4.Display the Person List\n");
        printf("5.Find the max bmi from the Person List\n");
        printf("6.Exit\n");
        while(1) {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch) {
          case 1:
             printf("Enter your id:");
             scanf("%d",&h[c].id);
             printf("Enter you name:");
             scanf(" %[^\n]",h[c].name);
             printf("Enter your height(in m):");
             scanf("%f",&h[c].height);
             printf("Enter your weight(in kg):");
             scanf("%f",&h[c].weight);
             h[c].bmi=(h[c].weight)/(h[c].height*h[c].height);
             c++;
             if(c>50) {
                printf("Server down");
             }
             printf("Person id added successfully.\n");
             break;
          case 2:
             if(c==0) {
                printf("No record found!\n");
             } else {
                printf("Enter your id to update:");
                scanf("%d",&id);
                for(i=0; i<c; i++) {
                   if(id==h[i].id) {
                      printf("Enter you name:");
                      scanf(" %s", h[i].name);
                      printf("Enter your height(in m):");
                      scanf("%f",&h[i].height);
                      printf("Enter your weight(in kg):");
                      scanf("%f",&h[i].weight);
                      h[i].bmi=(h[i].weight)/(h[i].height*h[i].height);
                      f=1;
                      break;
                   }
                }
                printf("Id updated successfully!\n");
                if(f==0) {
                   printf("ID NOT FOUND.\n");
                }
             }
             break;
          case 3:
             if(c>0) {
                for(i=0; i<c; i++) {
                   for(j=i+1; j<c; j++) {
                      if(h[i].height > h[j].height) {
                         temp = h[i];
                         h[i] = h[j];
                         h[j] = temp;
                      }
                   }
                }
                printf("Height in Ascending order:\n");
                printf("Person ID\tPerson Name\tHeight\t\tWeight\t\tBMI\n");
                for(i=0; i<c; i++) {
                   printf("%d\t",h[i].id);
                   printf("\t%s\t",h[i].name);
                   printf("\t %.2f\t",h[i].height);
                   printf("\t %.2f\t",h[i].weight);
                   printf("\t %.2f\t\n",h[i].bmi);
                }
             }
             else
                printf("No Person added\n");
                break;
          case 4:
                if(c>0) {
                printf("Person ID\tPerson Name\tHeight\tWeight\tBMI\tReview\n");
                   for(i=0; i<c; i++) {
                      printf(" %d\t",h[i].id);
                      printf("\t %s\t",h[i].name);
                      printf("\t %.2f",h[i].height);
                      printf("\t %.2f",h[i].weight);
                      printf("\t%.2f",h[i].bmi);
                      if(h[i].bmi<=18.4) {
                         printf("\tUnderweight\n");
                      }
                      else if(h[i].bmi>=18.5 && h[i].bmi<=24.9 ) {
                         printf("\tNormal\n");
                      }
                      else if(h[i].bmi>=20.0 && h[i].bmi<=39.9 ) {
                         printf("\tOverweight\n");
                      }
                      else {
                         printf("\tObese\n");
                      }
                   }
                }
                else
                   printf("No person details added\n");
                break;
          case 5:
                if(c>0) {
                   float maxbmi = h[0].bmi;
                   for(i=1; i<c; i++) {
                      if(maxbmi < h[i].bmi) {
                         maxbmi = h[i].bmi;
                      }
                   }
                   printf("Max bmi is %.2f\n",maxbmi);
                }
                else
                   printf("No person details added\n");
                break;
          case 6:
                printf("Exiting...");
                return 0;
          default:
                printf("No choice found\n");
        }
        }
}
