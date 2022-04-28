//Using fopen(), fgetc(), fputc() and fclose() functions write a program that reads characters from the keyboard and writes them to a disk file until 
//the user types a dollar sign. The filename is specified from the command line.
#include<stdio.h>
int main()
{
   FILE* p=fopen("sample.txt","a");
   while(1)
   {
   char ch;
   scanf("%c",&ch);
   if (ch == '$')
   {
      break;
   }
   else
   {
   fprintf(p,"%c",ch);
   }
   }
   fclose(p);
   return 0;
}
