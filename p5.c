#include<stdio.h>

int str_len(char random[])
{
   int n=0;
   while (random[n]!='\0')
   {
       n++;
   }
   return n;
}

int main()
{
   printf("Enter your string: \n");
   char random[100];
   scanf("%s",&random);
   
   printf("The length of string is : %d",str_len(random));
   return 0;
}