/**
   without static keyword
*/

#include<stdio.h>

void main(){
    int i;
    for(i=1; i<=10; i++){
        msg();
    }
}

void msg(){
    int ip = 1;
    printf("\n value of ip is %d", ip);
    ip++;
}
