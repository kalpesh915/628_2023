/**
    write data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file4.txt", "r");
    char ip;

    /// file end of file
    while(!feof(fp)){
        ip = fgetc(fp);
        printf(" %c", ip);
    }
    fclose(fp);
}
