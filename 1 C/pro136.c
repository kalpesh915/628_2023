/**
    create simple integer array
*/
#include<stdio.h>

void main(){

    int ip[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};
    int i;

    for(i=0; i<10; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    for(i=0; i<10; i++){
        printf("\n value of ip[%d] is %d", i, ip[i]);
    }

}
