#include<stdio.h>
int main (void)
{
    int cock,hen,chiken;

    for(cock=0;cock<=100;cock++)
    for(hen=0;hen<=100;hen++)
    for(chiken=0;chiken<=100;chiken++)
    if(cock+hen+chiken==100&&5*cock+2*hen+chiken/3==100)
    printf("cock is %d,hen is %d,chiken is %d\n",cock,hen,chiken);

    return 0;
}