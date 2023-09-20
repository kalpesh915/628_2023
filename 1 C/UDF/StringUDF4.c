#include<stdio.h>

/**
    UDF : character function
*/

int isAlphabet(char);

void main(){
    char ip;

    printf("\n Enter any character \t ");
    ip = getche();

    if(isAlphabet(ip)){
        printf("\n True");
    }else{
        printf("\n False");
    }
}

int isAlphabet(char ip){
    if((ip >= 65 && ip <= 90) || (ip >= 97 && ip <= 122)){
        return 1;
    }else{
        return 0;
    }
}

