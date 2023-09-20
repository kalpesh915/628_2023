#include<stdio.h>

/**
    factorial 5

    ans = 5 * 4 * 3 * 2 * 1;
*/

void main(){
    int ip, i, ans = 1;
    printf("\n Enter any number \t");
    scanf("%d", &ip);

    for(i=ip; i>1; i--){
        ans = ans * i;
    }

    printf("\n answer is %d", ans);
}
