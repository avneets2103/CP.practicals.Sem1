#include<stdio.h>
int  main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int coeff =1;
        for(int j=1;j<=n-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",coeff);
            coeff=coeff*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}