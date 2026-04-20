#include<stdio.h>
union conversion{
   float rupees;
   float dollars;
};
int main()
{
   union conversion u;
   printf("Conversion rupees to dollars\n");
   printf("Enter amount of rupees:Rs");
   scanf("%f",&u.rupees);
   u.dollars=u.rupees/83;
   printf("Amount in dollars is $%.2f\n",u.dollars);
   return 0;
}
