#include<stdio.h>

/**
    prime number
    number is divisible by 1 or itself only
*/

void main(){
    int ip, i, flag = 1;
    printf("\n Enter any number \t");
    scanf("%d", &ip);

    for(i=2; i<ip/2; i++){
        if(ip %i == 0){
            flag = 0;
            break;
        }
    }

    if(flag == 0){
        printf("\n not a prime number");
    }else{
        printf("\n prime number");
    }
}
