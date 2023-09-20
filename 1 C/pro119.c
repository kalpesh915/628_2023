#include<stdio.h>

/**
    count how many digits in enetered number
*/

void main(){
    int ip, count = 0;

    printf("\n Enter any number \t");
    scanf("%d", &ip);

    while(ip > 0){
        count++;
        ip = ip / 10;
    }

    printf("\n Answer is %d", count);
}
