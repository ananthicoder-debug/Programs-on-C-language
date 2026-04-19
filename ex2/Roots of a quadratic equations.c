#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,D,x1,x2;
   printf("Enter the co-efficient of quadratic equation:");
   scanf("%d%d%d",&a,&b,&c);
   D=sqrt(pow(b,2)-(4*a*c));
   if(D>0)
   {
      printf("The equation has two real and distinct roots\n");
      x1=(-b+D)/(2*a);
      x2=(-b-D)/(2*a);
      printf("the roots of the equations are %d,%d\n",x1,x2);
   }
   else if(D<0)
   {
      printf("The equation has complex roots\n");
   }
   else if(D==0)
   {
      printf("The equations has real and equal roots\n");
      x1=-b/(2*a);
      printf("The roots of the equations are %d,%d",x1,x1);
   }
   else
      printf("Invalid input");
   return 0;
}
