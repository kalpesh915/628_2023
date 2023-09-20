/**
    write data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file4.txt", "r");
    char ip[100];

    /// store data in ip maximum 100 characters from fp
    fgets(ip, 100, fp);
    printf("\n Data is %s", ip);
    fgets(ip, 100, fp);
    printf("\n Data is %s", ip);
    fclose(fp);
}
