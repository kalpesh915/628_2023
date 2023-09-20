/**
    UDF 1 : No Parameters no return value
*/

#include<stdio.h>

void msg(); /// declaration

void main(){
    msg(); /// calling
    msg();
    msg();
    msg();
    msg();
}

/// defination
void msg(){
    printf("\n Welcome to world of functions in C Language");
}
