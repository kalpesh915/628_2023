/**
    basic pointer with array
*/

#include<stdio.h>

void main(){
    int ip[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, *ptr, i;

    ptr = &ip;
    for(i=1;i<=10; i++)
    {
        printf("\n value of ptr is %d and address is %d", *ptr, ptr);
        ptr++;
    }
}
