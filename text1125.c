#include<stdio.h>
int main (void)
{
    int number,a,b,c;

    for(number=100;number<=999;number++){
        a=number%10;
        number/10;
        b=number%10;
        number/10;
        c=number%10;
    if(number=a*a*a+b*b*b+c*c*c){
        printf("number is %d",number)

    }
    }
    return 0;
}