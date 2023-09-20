/**
    check entered value is exist in array or not
*/
#include<stdio.h>
#define size 10
void main(){

    int ip[size];
    int i, tmp, flag = 0;

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    printf("\n Enter value for search in array \t");
    scanf("%d",&tmp);

    for(i=0;i<size; i++){
        if(tmp == ip[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("\n %d is Exist in array on %d index", tmp, i);
    }else{
        printf("\n %d is not Exist in array", tmp);
    }
}
