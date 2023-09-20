/**
    0 1 1 2 3 5 8 13 . . . . .
*/

#include<stdio.h>

void main(){
    int ip1, ip2, ip3, i = 0;

    ip1 = 0;
    ip2 = 1;

    printf(" %d %d", ip1, ip2);
    while(i <= 10){
        ip3 = ip1 + ip2;
        ip1 = ip2;
        ip2 = ip3;
        printf(" %d", ip3);
        i++;
    }
}
