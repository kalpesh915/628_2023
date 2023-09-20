/**
    separate array in odd and even
*/
#include<stdio.h>
#define size 10

void main(){
    int ip[size], odd[size], even[size], i, oc=0, ec=0;

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t",i);
        scanf("%d", &ip[i]);
    }

    for(i=0; i<size; i++){
        if(ip[i] %2 == 0){
            even[ec] = ip[i];
            ec++;
        }else{
            odd[oc] = ip[i];
            oc++;
        }
    }

    printf("\n Odd Values are \n");
    for(i=0; i<oc; i++){
        printf(" %d", odd[i]);
    }

    printf("\n Even Values are \n");
    for(i=0; i<ec; i++){
        printf(" %d", even[i]);
    }
}
