#include<stdio.h>

/**
    arm strong number
    371

    3   =   027
    7   =   343
    1   =   001

            371
*/

void main(){
    int ip, tmp, cube = 0, rem;

    printf("\n Enter any value \t");
    scanf("%d", &ip);

    tmp = ip;

    while(ip > 0){
        rem = ip % 10;
        cube = cube + (rem * rem * rem);
        ip = ip / 10;
    }

    if(tmp == cube){
        printf("\n number is armstrong");
    }else{
        printf("\n try another number");
    }
}
