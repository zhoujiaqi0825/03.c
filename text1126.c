#include<stdio.h>
int main (void)
{
    int m,i;
    for(m=2;m<=500;m++){
        for(i=2;i<=m/2;i++){
            if(m%i==0){
               break;
            }

        }

    }if(i>m){
        printf("%6d\n",m);

    }
    return 0;
}