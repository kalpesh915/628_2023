#include<stdio.h>

void main(){
    int bytes, *ptr, blocks, i;

    printf("\n Enter bytes to allocated by malloc \t");
    scanf("%d", &blocks); /// 100

    ptr = (int*) calloc(blocks, sizeof(int));

    for(i=0; i<blocks; i++){
        printf("\n value is %d and address is %d", *ptr, ptr);
        ptr++;
    }

    free(ptr);
}
