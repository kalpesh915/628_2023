#include<stdio.h>

/**
    UDF : character function
*/

/// declaration
int isUpper(char);

void main(){
    char ip;

    printf("\n Enter any character \t ");
    ip = getche();

    /// calling
    if(isUpper(ip)){
        printf("\n True");
    }else{
        printf("\n False");
    }
}


/// defination
int isUpper(char ip){
    if((ip >= 65 && ip <= 90)DS){
        return 1;
    }else{
        return 0;
    }
}

