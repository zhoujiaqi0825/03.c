#include<stdio.h>
int main (void)
{
    int a[10];
    int i,min;

    printf("Enter numbers:");
    for(i=0;i<=4;i++)
    sacnf("%d",&a[i]);
    min=0;
    for(i=1;i<=4;i++)
       if(a[i]<a[0])
       min=i;
    printf("min =%d\n",a[min]);

    return 0;
}