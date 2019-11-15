#include<stdio.h>
int main (void)
{
    int i,j,n,product;
    double sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        product=1;
        for(i=1;i<=1;i++){
           product=product*i;
        }
    sum=sum+product;
    }
    printf("sum is %lf",sum);

    return 0;
}