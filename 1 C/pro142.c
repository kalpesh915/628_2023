/**
    sort array in descending orders
*/
#include<stdio.h>
#define size 10

void main(){
    int ip[size], i, j, tmp;

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t",i);
        scanf("%d", &ip[i]);
    }


    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(ip[i] > ip[j]){
                tmp = ip[i];
                ip[i] = ip[j];
                ip[j] = tmp;
            }
        }
    }

    printf("\n Sorted Data is ");
    for(i=0; i<size; i++){
        printf(" %d", ip[i]);
    }
}
