/**
    write data in file
*/

#include<stdio.h>

void main(){
    FILE *fp = fopen("file3.txt", "w");
    char ip;
    printf("\n write data in file press Z for exit \t");

    while(ip != 'Z'){
        ip = getche();
        if(ip == 'Z'){
            break;
        }

        fputc(ip, fp);
    }
    printf("\n file open successfully");

    fclose(fp);
}
