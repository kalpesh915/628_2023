/**
    write data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file1.txt", "w");
    printf("\n file open successfully");
    fputs("Welcome to world of files in C Language", fp);
    fclose(fp);
}
