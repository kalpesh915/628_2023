#include<stdio.h>

enum boolean {false, true};

void main(){
    enum boolean b1;
    b1 = true;
    if(b1){
        printf("\n True");
    }else{
        printf("\n False");
    }
}
