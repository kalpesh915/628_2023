/**
    press 0 to exit from loop
*/

#include<stdio.h>

void main(){
    int  i, max = 0;

    while(i != 0){
        printf("\n Enter value for i \t");
        scanf("%d", &i);

        if(max < i){
            max = i;
        }
    }

    printf("\n answer is %d", max);
}
