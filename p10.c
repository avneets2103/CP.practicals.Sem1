#include<stdio.h>
#include<string.h>

void str_rev(char string[],int n)
{
    char duplicate[50];
    strcpy(duplicate,string);
    for (int i = 0; i < n; i++)
    {
        string[i]=duplicate[n-i-1];
        printf("%c",string[i]);
    }    
}

int main()
{
   char string[50];
   printf("Enter string to reverse: ");
   scanf("%s",string);
   int n=0;
   while (string[n]!='\0')
   {
      n++;
   }  
   str_rev(string,n);
   return 0;
}