#include<stdio.h>
#include<stdlib.h>

float average(float arr[],int n)
{
    float sum=0;
    for (int i = 0; i < n ; i++)
    {
        sum=sum+arr[i];
    }
    return sum/n;
}

int main()
{
   int n;
   float*ptr;
   printf("Enter number of employees\n");
   scanf("%d",&n);
   ptr=(float*)malloc(n*sizeof(float));
   for (int i = 0; i < n; i++)
   {   
       printf("Enter age of employee %d: ",i+1); 
       scanf("%f",&ptr[i]);
   }
   printf("The average age is: %0.2f",average(ptr,n));  
   free(ptr);
   return 0;
}


