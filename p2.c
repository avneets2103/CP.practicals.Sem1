#include<stdio.h>
int main()
{
    double num,den,ans;
    printf("Enter numerator, denominator in series: ");
    scanf("%lf %lf",&num,&den);
    if (den==0)
    {
        printf("Division by zero isnt allowed");
    }
    else
    {
        ans=num/den;
        printf("%0.2lf",ans);
    }  
    return 0;
}