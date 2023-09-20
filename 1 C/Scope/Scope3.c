/**
    global variables
*/

#include<stdio.h>

int ip = 100;

void main(){
    printf("\n value of ip is %d", ip);

    {
        printf("\n value of ip is %d", ip);
    }

    {
        printf("\n value of ip is %d", ip);
    }

    {
        int ip = 40;
        printf("\n value of ip is %d", ip);
    }

    printf("\n value of ip is %d", ip);
}
