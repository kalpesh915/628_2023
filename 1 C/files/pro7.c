/**
    append data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file5.txt", "a");
    fputs("Welcome to world of files in c\n", fp);
    fclose(fp);
}
