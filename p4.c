#include<stdio.h>
int main()
{
   int class[3][30];
   for (int i = 1; i <= 3; i++)
   {
       printf("Enter data for class %d: \n",i);
       for (int j =1; j <= 30; j++)
       {
           printf("Enter marks for student %d: ",j);
           scanf("%d",&class[i][j]);
       }
   }
   
   printf("\nYour entered data is: \n");
   for (int i = 1; i <= 30; i++)
   {
       for (int j =1; j <= 2; j++)
       {
           printf("%d ",class[i][j]);
       }
       printf("\n");
   } 

   return 0;
}