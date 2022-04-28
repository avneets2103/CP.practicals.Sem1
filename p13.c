//Write a program in ‘C’ that reads files and displays them on the screen.

#include<stdio.h>
int main()
{
   FILE* p=fopen("sample.txt","r");
   char ch;
   while (ch != EOF)
   {
       ch=fgetc(p);
       printf("%c",ch);  
   }
   
   return 0;
}