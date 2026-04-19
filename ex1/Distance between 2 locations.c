#include<stdio.h>
#include<math.h>
int main()
{
   int x1,x2,y1,y2,a,b,c,distance;
   printf("Enter the x and y co-ordinates of location 1:");
   scanf("%d%d",&x1,&y1);
   printf("Enter the x and y co-ordinate of location 2:");
   scanf("%d%d",&x2,&y2);
   a=x2-x1;
   b=y2-y1;
   c=pow(a,2)+pow(b,2);
   distance= sqrt(c);
   printf("Distance between 2 locations: %d",distance);
   return 0;
}
