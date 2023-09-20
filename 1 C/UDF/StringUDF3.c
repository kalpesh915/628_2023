#include<stdio.h>

/**
    UDF : string compare
*/

int compare(char [], char []);

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any String for ip1 \t");
    gets(ip1);
    printf("\n Enter any String for ip2 \t");
    gets(ip2);

    ans = compare(ip1, ip2);

    printf("\n answer is %d", ans);
}

int compare(char ip1[], char ip2[]){
    int tmp = 0, ans = 0;

    /**
            012345
        ip1 rajkot
        ip2 rajkot
    */

    while(ip1[tmp] != '\0' || ip2[tmp] != '\0')
    {
        if(ip1[tmp] != ip2[tmp]){
            ans = ip1[tmp] - ip2[tmp];
            break;
        }
        tmp++;
    }
    return ans;
}
