#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter 3 numbers:");
   scanf("%d%d%d",&a,&b,&c);
   printf("Without conditional operators\n");
   if(a>b && a>c)
      printf("%d is the maximum number\n",a);
   else if(b>c)
        printf("%d is the maximum number\n",b);
   else
      printf("%d is the maximum number\n",c);
   printf("Using conditional operators\n");
   int max=a>b?(a>c?a:c):(b>c?b:c);
   printf("%d is the maximum",max);
   return 0;
}
