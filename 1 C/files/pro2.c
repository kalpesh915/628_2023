/**
    write data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file2.txt", "w");
    char ip[100];
    printf("\n Enter any string to write in file \t");
    gets(ip);
    printf("\n file open successfully");
    fputs(ip, fp);
    fclose(fp);
}
