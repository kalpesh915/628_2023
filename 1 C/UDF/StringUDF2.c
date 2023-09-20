#include<stdio.h>

/**
    UDF : string uppercase
*/

void uppercase(char []);

void main(){
    char ip[100];

    printf("\n Enter any String \t");
    gets(ip);
    uppercase(ip);
}

void uppercase(char ip[100]){
    int tmp = 0;
    while(ip[tmp] != '\0'){
            /// 97 = a & 122 = z
        if(ip[tmp] >= 97 && ip[tmp] <= 122){
            ip[tmp] = ip[tmp] - 32;
        }
        tmp++;
    }

    printf("\n New String is %s", ip);
}
