/**
    write data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file4.txt", "r");
    char ip[100];

    /// file end of file
    while(!feof(fp)){
        fgets(ip, 100, fp);
        printf("Data is %s", ip);
    }
    fclose(fp);
}
