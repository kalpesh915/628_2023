/**
    UDF 4 : with Parameters with return value
*/

#include<stdio.h>

int cube(int); /// declaration

void main(){
    int ip, ans;
    printf("\n Enter any value for calculate cube \t");
    scanf("%d", &ip);

    ans = cube(ip);
    printf("\n Cube of %d is %d", ip, ans);
}

/// defination
int cube(int ip){
    //return ip * ip * ip;
    int tmp;
    tmp = ip * ip * ip;
    return tmp;
}
