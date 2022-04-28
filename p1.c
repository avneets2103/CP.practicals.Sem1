//Its a bitwise operator for shifting th bits in address by n bits either to the left(<<) or right(>>)
//eg: int x = 7 => [00000111]
//then x<<2 will do [00011100] i.e. multiplyinh by 2^n
//then x>>2 will do [0000000111] 
#include<stdio.h>
int main()
{
   int x;
   printf("Enter the integer: ");
   scanf("%d",&x);
   int n;
   printf("Enter the shift index: ");
   scanf("%d",&n);
   int p = x<<n;
   printf("Before left shift: %d\n",x);
   printf("After left shift: %d\n",x<<n);
   int a = x>>n;
   printf("Before right shift: %d\n",x);
   printf("After right shift: %d\n",x>>n);
   return 0;
}