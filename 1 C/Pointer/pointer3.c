/**
    basic pointer with array
*/

#include<stdio.h>

void main(){
    int ip[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, *ptr;

    ptr = &ip;
    printf("\n value of ptr is %d and address is %d", *ptr, ptr);
    ptr++;
    printf("\n value of ptr is %d and address is %d", *ptr, ptr);
}
