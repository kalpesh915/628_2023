/**
    call by value concept
*/

#include<stdio.h>

void main(){
    int ip1, ip2;
    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);

    printf("\n before value of ip1 is %d and ip2 is %d", ip1, ip2);
    swap(ip1, ip2);
    printf("\n after value of ip1 is %d and ip2 is %d", ip1, ip2);  /// ??
}

void swap(int ip1, int ip2){
    int tmp;
    tmp = ip1;
    ip1 = ip2;
    ip2 = tmp;
    printf("\n in swap() value of ip1 is %d and ip2 is %d", ip1, ip2);
}
