/**
    create simple integer array
*/
#include<stdio.h>

void main(){

    int ip[10];
    int i, max = 0;

    for(i=0; i<10; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);

        if(max < ip[i]){
            max = ip[i];
        }
    }

    printf("\n Max is %d", max);
}
