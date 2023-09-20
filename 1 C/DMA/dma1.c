#include<stdio.h>

void main(){
    int bytes, *ptr, blocks, i;

    printf("\n Enter bytes to allocated by malloc \t");
    scanf("%d", &bytes); /// 100

    ptr = (int*) malloc(bytes);
    blocks = bytes / sizeof(int);

    for(i=0; i<blocks; i++){
        printf("\n value is %d and address is %d", *ptr, ptr);
        ptr++;
    }

    free(ptr);
}
