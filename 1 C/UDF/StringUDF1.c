#include<stdio.h>

/**
    UDF : string length find

    0123456
    Rajkot\0
*/

int stringLength(char []);

void main(){
    char ip[100];
    int ans;

    printf("\n Enter any String \t");
    gets(ip);

    ans = stringLength(ip);

    printf("\n String length is %d", ans);
}

int stringLength(char ip[100]){
    int tmp = 0;
    while(ip[tmp] != '\0'){
        tmp++;
    }

    return tmp;
}
