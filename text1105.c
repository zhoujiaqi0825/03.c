#include<stdio.h>
int main (void)
{
    int a;
    printf("请输入一个整数");
    scanf("%d",&a);
    if(a>=90){
        printf("A\n");
    }else if(a<90 && a>=80){
        printf("B\n");
    }else if(a<80 && a>=70){
        printf("C\n");
    }else if(a<70 && a>=60){
        printf("D\n");
    }else
    {
        printf("E\n");
    }
    return 0;
}     