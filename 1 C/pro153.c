/**
    UDF 3 : no Parameters with return value
*/

#include<stdio.h>

float pi(); /// declaration

void main(){
    float ans;
    ans = pi();
    printf("\n Pi is %f", ans);
    printf("\n Pi is %f", pi());
}

/// defination
float pi(){
    return 3.14;
}
