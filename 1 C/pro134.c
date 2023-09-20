/**
    create simple integer array
*/
#include<stdio.h>

void main(){

    int ip[10];
    printf("\n Size of ip is %d Bytes", sizeof(ip));
    ip[0] = 110;
    ip[1] = 119;
    ip[2] = 118;
    ip[3] = 117;
    ip[4] = 116;
    ip[5] = 115;
    ip[6] = 114;
    ip[7] = 113;
    ip[8] = 112;
    ip[9] = 111;

    printf("\n %d", ip[6]);
}
