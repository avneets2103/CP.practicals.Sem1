#include<stdio.h>

int main()
{
   int x,y;
   printf("Enter number 1:\n");
   scanf("%d",&x);
   printf("Enter number 2:\n");
   scanf("%d",&y);
   printf("%d XOR %d is: %d\n",x,y,x^y);
   printf("%d OR %d is: %d\n",x,y,x|y);
   printf("%d AND %d is: %d\n",x,y,x&y);
   
   printf("Enter for NOR: ");
   int p;
   scanf("%d",&p);
   printf("Bitwise NOR of %d is %d",p,~p);

   return 0;
}