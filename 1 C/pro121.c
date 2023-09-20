#include<stdio.h>

/**
    Reverse the entered number
*/

void main(){
    int ip, ans = 0;

    printf("\n Enter any number \t");
    scanf("%d", &ip);

    while(ip > 0){
        ans = ans * 10;
        ans = ans + ip % 10;
        ip = ip / 10;
    }

    printf("\n Answer is %d", ans);
}
