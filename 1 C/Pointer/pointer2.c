/**
    basic pointer
*/

#include<stdio.h>

void main(){
    int ip = 10, *ptr;

    printf("\n value of ip is %d", ip);
    printf("\n address of ip is %d", &ip);

    ptr = &ip; /// assing address of ip to ptr pointer

    printf("\n value of ptr is %d", ptr);
    printf("\n address of ptr is %d", &ptr);
    printf("\n value of ptr is %d", *ptr);

    *ptr = 100;
    printf("\n value of ip is %d", ip);
}
